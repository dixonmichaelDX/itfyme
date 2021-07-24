
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.*;

public class Customer extends Person implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String custfile = "./customer.data" ;
    int AccountID;
    Date joinDate;
    Date TransDate;
    int numOfBooks;
    public Customer(int iD, String name, String emailID, int phoneNum, int accountID, Date joinDate, Date transDate,
            int numOfBooks) {
        super(iD, name, emailID, phoneNum);
        AccountID = accountID;
        this.joinDate = joinDate;
        TransDate = transDate;
        this.numOfBooks = numOfBooks;
    }
    public int getAccountID() {
        return AccountID;
    }
    public void setAccountID(int accountID) {
        AccountID = accountID;
    }
    public Date getJoinDate() {
        return joinDate;
    }
    public void setJoinDate(Date joinDate) {
        this.joinDate = joinDate;
    }
    public Date getTransDate() {
        return TransDate;
    }
    public void setTransDate(Date transDate) {
        TransDate = transDate;
    }
    public int getNumOfBooks() {
        return numOfBooks;
    }
    public void setNumOfBooks(int numOfBooks) {
        this.numOfBooks = numOfBooks;
    }
    @Override
    public String toString() {
        return "Customer [AccountID=" + AccountID + ", TransDate=" + TransDate + ", joinDate=" + joinDate
                + ", numOfBooks=" + numOfBooks + "]";
    };
    public static void save(ArrayList<Customer> customerlist) {
        System.out.print("Saving master Customer list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(custfile);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(customerlist);
            out.close();
            fileOut.close();
            System.out.println("Customer data is saved!");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    public static ArrayList<Customer> initializeFromFile() {
        try {
            File f = new File(custfile) ;
            if (!f.exists()) {
                return new ArrayList<Customer>();
            }
            FileInputStream fileIn = new FileInputStream(custfile);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<Customer> customerlist  = (ArrayList<Customer>) in.readObject();
            in.close();
            fileIn.close();
            return customerlist ;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("customer class not found");
            c.printStackTrace();
            return null;
        }
    }



}