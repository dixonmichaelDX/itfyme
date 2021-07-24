import java.io.*;
public class TestBook {
   public static void main(String [] args) {
       AuthorSer a = new AuthorSer ("name","name@gmail.com",'f');
       Book b = new Book("book1", a, 79.9f,5);

       System.out.println("Serialized book...");
       System.out.println("Name: " + b.getName());
       System.out.println("email: " +b.getPrice());
       System.out.println("gender: " + b.getQty());
       System.out.println("test: " + b.getAuthor());
        try {
            FileOutputStream fileOut =
            new FileOutputStream("book.dat");
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(b);
            out.close();
            fileOut.close();
            System.out.println("Serialized data is saved in ./book.data");
        } catch (IOException i) {
            i.printStackTrace();
        }

      // now deserialise
        Book b1 ;
        try {
            FileInputStream fileIn = new FileInputStream("book.dat");
            ObjectInputStream in = new ObjectInputStream(fileIn);
            b1= (Book) in.readObject();
            in.close();
            fileIn.close();
        } catch (IOException i) {
            i.printStackTrace();
            return;
        } catch (ClassNotFoundException c) {
            System.out.println("AuthorSer class not found");
            c.printStackTrace();
            return;
        }
        System.out.println("Deserialized AuthorSer1...");
        System.out.println("Name: " + b.getName());
        System.out.println("email: " +b.getPrice());
        System.out.println("gender: " + b.getQty());
        System.out.println("test: " + b.getAuthor());
    }
}