import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.Scanner;

//import org.graalvm.compiler.nodes.memory.address.AddressNode.Address;


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
            System.out.println(publisherlist);
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



    public static Publisher add() {
        int     id;
        String  name;
        System.out.println("Please enter publisher id");
        id = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter publisher name");
        name = System.console().readLine();
        System.out.println("Please enter emailid ");
        String email = System.console().readLine();

        System.out.println("Please enter Add1");
        String add1 = System.console().readLine();
        System.out.println("Please enter Add2");
        String add2 = System.console().readLine();
        System.out.println("Please enter City id");
        int cityid = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter state id");
        int stateid = Integer.parseInt(System.console().readLine());
        Address a = new Address(add1,add2,cityid,stateid);
        //Publisher p = new Publisher(id,name,a,email);
        //System.out.println(p);
        //publist.add(p);
        return new Publisher(id,name,a,email);
    }

    public static int findById(ArrayList<Publisher> list, int id) {
        int idx = -1;
        int size = list.size() ;
        for (int i = 0; i < size; i++) {
            if (list.get(i).getID() == id) {
                idx = i ;
            }
        }
        return idx ;
    }  
    public static Publisher update(Publisher pub) {
        System.out.println("Publisher Information is:\n");
        System.out.println(pub);
        System.out.println("if you dont want to update please press enter \n");
        System.out.println("Please update name ");
        
        String name = System.console().readLine();
        pub.name = name.equals("") ? pub.name : name ;
        System.out.println("Please update email\n");
        String email = System.console().readLine();
        System.out.println(email);
        if (email.equals("")) {
            pub.email = pub.email;
        } else {
            pub.email = email;
        }
        System.out.println("Please update publisher add1");
        String add1= System.console().readLine();
        if (add1.equals("")) {
            pub.address.setAdd1( pub.address.add1);    
        } else {
            pub.address.setAdd1(add1);
        }
        System.out.println("Please update publisher add2");
        String add2= System.console().readLine();
        if (add2.equals("")) {
            pub.address.setAdd2( pub.address.add2);    
        } else {
            pub.address.setAdd1(add2);
        }
        return pub;   
    }  
}
