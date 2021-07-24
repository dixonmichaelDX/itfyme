import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Date;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

import javax.swing.text.DateFormatter;

import java.text.DateFormat;


//DateFormatter df = new DateFormatter()
//Date.parse 
public class Customer extends Person implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String custfile = "./cust.data" ;
    int accountID;
    int numOfBooks;
    Date joinDate;
    Date TransDate;
    public Customer(int id, String name, String emailID, int phonenum, int accountID, int numOfBooks, Date joinDate,
            Date transDate) {
        super(id, name, emailID, phonenum);
        this.accountID = accountID;
        this.numOfBooks = numOfBooks;
        this.joinDate = joinDate;
        TransDate = transDate;
    }
    public int getAccountID() {
        return accountID;
    }
    public void setAccountID(int accountID) {
        this.accountID = accountID;
    }
    public int getNumOfBooks() {
        return numOfBooks;
    }
    public void setNumOfBooks(int numOfBooks) {
        this.numOfBooks = numOfBooks;
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
    @Override
    public String toString() {
        return "Customer [TransDate=" + TransDate + ", accountID=" + accountID + ", joinDate=" + joinDate
                + ", numOfBooks=" + numOfBooks + "]";
    }
    public static void save(ArrayList<Customer> liblist) {
        System.out.print("Saving master cust list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(custfile);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(liblist);
            out.close();
            fileOut.close();
            System.out.println("customer data is saved!");
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
            ArrayList<Customer> custlist  = (ArrayList<Customer>) in.readObject();
            in.close();
            fileIn.close();
            return custlist ;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("customer class not found");
            c.printStackTrace();
            return null;
        }
    }

    public static Customer add() throws ParseException {
        
        String  name;
        // create Customer master
        

        System.out.println("Please enter customer name");
        name = System.console().readLine();

        System.out.println("Please enter customer email id");
        String emailID = System.console().readLine();
        System.out.println("Please enter customer account id");
        int accountID = Integer.parseInt(System.console().readLine());

        System.out.println("Please enter  num of book");
        int numOfBooks = Integer.parseInt(System.console().readLine());

        System.out.println("Please enter customer phonenum");
        int phonenum = Integer.parseInt(System.console().readLine());

        System.out.println("Please enter the joining date");
        String dates= System.console().readLine();
        Date date1 = new SimpleDateFormat("dd/MM/yyyy").parse(dates);

        System.out.println("Please enter the Transaction date");
        String tdate = System.console().readLine();
        Date date2 = new SimpleDateFormat("dd/MM/yyyy").parse(tdate);
        return new Customer(accountID, name, emailID,phonenum, accountID, numOfBooks, date1, date2);
    }

    public static Customer update(Customer customer) {
        String numOfBooks;
        System.out.println("customer details are");
        System.out.println(customer);
        System.out.println("if you dont want to update please press enter \n");

        System.out.println("Please update  num of book");
        numOfBooks = System.console().readLine();
        if (numOfBooks.equals("")){

        } else {
            customer.numOfBooks = Integer.parseInt(numOfBooks);

        }
        return customer;
    }


    public static int findByID(ArrayList<Customer> list, int id) {
        int idx = -1;
        int size = list.size();
        for (int i = 0; i < size; i++) {
            if (list.get(i).getID() == id) {
                idx = i;
            }
        }
        return idx;
    }    
}

