import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;


public class Publisher implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String publisherfile = "./publish.data" ;
    int ID;
    String name;
    Address address;
    String email;
    public Publisher(int ID, String name, Address address, String email) {
        this.ID = ID;
        this.name = name;
        this.address = address;
        this.email = email;
    }
    public int getID() {
        return ID;
    }
    public void setID(int ID) {
        this.ID = ID;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public Address getAddress() {
        return address;
    }
    public void setAddress(Address address) {
        this.address = address;
    }
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    @Override
    public String toString() {
        return "Publisher [ID=" + ID + ", address=" + address + ", email=" + email + ", name=" + name + "]";
    }

    // callee will pass the citylist contianing list of cities to be saved / serialized
    public static void save(ArrayList<Publisher> publisherlist) {
        System.out.print("Saving master Publisher list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(publisherfile);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(publisherlist);
            out.close();
            fileOut.close();
            System.out.println("Publisher data is saved!");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    public static ArrayList<Publisher> initializeFromFile() {
        try {
            File f = new File(publisherfile) ;
            if (!f.exists()) {
                return new ArrayList<Publisher>();
            }
            FileInputStream fileIn = new FileInputStream(publisherfile);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<Publisher> publisherlist  = (ArrayList<Publisher>) in.readObject();
            in.close();
            fileIn.close();
            return publisherlist;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("Publisher class not found");
            c.printStackTrace();
            return null;
        }
    }


    
}
