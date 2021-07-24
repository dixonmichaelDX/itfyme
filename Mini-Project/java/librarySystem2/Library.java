import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
public class Library implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String file = "./library.data" ;
    int ID;
    String name;
    Address address;
    Person librarian;
    public Library(int ID, String name, Address address, Person librarian) {
        this.ID = ID;
        this.name = name;
        this.address = address;
        this.librarian = librarian;
    }
    public int getID() {
        return ID;
    }
    public void setID(int iD) {
        ID = iD;
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
    public Person getLibrarian() {
        return librarian;
    }
    public void setLibrarian(Person librarian) {
        this.librarian = librarian;
    }
    @Override
    public String toString() {
        return "Library [ID=" + ID + ", Librarian=" + librarian + ", Name=" + name + ", address=" + address + "]";
    }

    public static void save(ArrayList<Library> list) {
        System.out.print("Saving master Category list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(file);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(list);
            out.close();
            fileOut.close();
            System.out.println("Category data is saved!");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    public static ArrayList<Library> initializeFromFile() {
        try {
            File f = new File(file) ;
            if (!f.exists()) {
                return new ArrayList<Library>();
            }
            FileInputStream fileIn = new FileInputStream(file);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<Library> list  = (ArrayList<Library>) in.readObject();
            in.close();
            fileIn.close();
            return list ;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("Cat class not found");
            c.printStackTrace();
            return null;
        }
    }
    
    public static Library add() {
        int     id;
        String  name;
        Publisher pub;
        System.out.println("Please enter Library id");
        id = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter Library name");
        name = System.console().readLine();
    
        //librarian
        String email;
        String libName;
        int librarianid;
        int phoneNum;
        System.out.println("enter the librarian Id");
        librarianid = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter Librarian name");
        libName = System.console().readLine();
        System.out.println("Please enter Librarian email");
        email = System.console().readLine();
        System.out.println("enter the librarian PhoneNum");
        phoneNum = Integer.parseInt(System.console().readLine());
        Person librarian = new Person(librarianid,libName,email,phoneNum);

        //Adres ingfo
        String add1, add2;
        int cityID,stateID;
        System.out.println("Please enter Add1");
        add1 = System.console().readLine();
        System.out.println("Please enter Add2");
        add2 = System.console().readLine();
        System.out.println("enter the city Id");
        cityID = Integer.parseInt(System.console().readLine());
        System.out.println("enter the state Id");
        stateID = Integer.parseInt(System.console().readLine());
        Address libAdress = new Address(add1, add2, cityID, stateID);

        return new Library(id, name, libAdress, librarian);

        


       
    }
    public static Library update(Library library) {
       // Address address;
        //Person librarian;
        int choice = showUpdateMenu(library);
        while (choice != 10) {
            choice = showUpdateMenu(library);
        }
        return library ;
    }
    

    
    public static int showUpdateMenu(Library library) {
        System.out.println("Author Information is:");
        System.out.println(library);  
        System.out.println("enter which field you want to upadate");
        System.out.println("enter 1-to upadate name\n");
        System.out.println("enter 2-to upadate Librarian\n");
        System.out.println("enter 3-to upadate address\n");
        int choice = 10;
        try {
            choice = Integer.parseInt(System.console().readLine());
            switch(choice) {
                case 1:
                    String name; 
                    System.out.println("Please update libaray name");
                    name = System.console().readLine();
                    System.out.println("read name is " + name);
                    library.name = name ;
                    System.out.println("Updated name is " +library.name);
                    break;

                //librarian info..
                case 2:  
                    System.out.println("Please update librarian name");
                    name = System.console().readLine();
                    System.out.println("read name is " + name);
                    library.librarian.name = name ;
                    System.out.println("Updated name is " +library.name);
                    break;

                //address inf....
                case 3:
                    System.out.println("enter 1 to update add1\n");
                    System.out.println("enter 2 to update add2\n");
                    System.out.println("enter 3 to exit");
                    int userChoice = Integer.parseInt(System.console().readLine());
                    while (userChoice != 3) {
                        switch(userChoice) {
                            case 1: 
                                String add1; 
                                System.out.println("update add1");
                                add1= System.console().readLine();
                                System.out.println("read add1 is " + add1);
                                library.address.setAdd1(add1);
                                break;
                            case 2: 
                                String add2;
                                System.out.println("update add2");
                                add2= System.console().readLine();
                                System.out.println("read name is " + add2);
                                library.address.setAdd2(add2);  
                                break;
                        }
                    }
                case 10 :
                    
                    System.out.println("stop");
            }
        }  catch (Exception c) {
            choice = -1 ;
            System.out.println("Please enter either 1 or 2 or 3 or 10");
        }      
            return choice ;
    }
    public static int findByID(ArrayList<Library> list, int id) {
        int idx = -1;
        int size = list.size() ;
        for (int i = 0; i < size; i++) {
            if (list.get(i).getID() == id) {
                idx = i ;
            }
        }
        return idx ;
    }

    
}