import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class Cat implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    private static final String file = "./category.data" ;
    int ID;
    String name;
    public Cat(int iD, String name) {
        ID = iD;
        this.name = name;
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
    @Override
    public String toString() {
        return "Category [ID=" + ID + ", name=" + name + "]";
    }
    
    // callee will pass the citylist contianing list of cities to be saved / serialized
    public static void save(ArrayList<Cat> list) {
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

    public static ArrayList<Cat> initializeFromFile() {
        try {
            File f = new File(file) ;
            if (!f.exists()) {
                return new ArrayList<Cat>();
            }
            FileInputStream fileIn = new FileInputStream(file);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<Cat> list  = (ArrayList<Cat>) in.readObject();
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
}