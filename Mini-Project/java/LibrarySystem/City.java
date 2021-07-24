import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class City implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String cityfile = "./city.data" ;
    int ID;
    String Name;
    public City(int iD, String name) {
        ID = iD;
        Name = name;
    }
    public int getID() {
        return ID;
    }
    public void setID(int iD) {
        ID = iD;
    }
    public String getName() {
        return Name;
    }
    public void setName(String name) {
        Name = name;
    }
    @Override
    public String toString() {
        return "City [ID=" + ID + ", Name=" + Name + "]";
    }

    // callee will pass the citylist contianing list of cities to be saved / serialized
    public static void save(ArrayList<City> citylist) {
        System.out.print("Saving master city list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(cityfile);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(citylist);
            out.close();
            fileOut.close();
            System.out.println("City data is saved!");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    public static ArrayList<City> initializeFromFile() {
        try {
            File f = new File(cityfile) ;
            if (!f.exists()) {
                return new ArrayList<City>();
            }
            FileInputStream fileIn = new FileInputStream(cityfile);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<City> citylist  = (ArrayList<City>) in.readObject();
            in.close();
            fileIn.close();
            return citylist ;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("City class not found");
            c.printStackTrace();
            return null;
        }
    }
}