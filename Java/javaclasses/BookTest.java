import java.util.*;
public class BookTest {
    public static void main(String [] args) {
        Author a = new Author("au1","au@gmail.com",'f',2020);
        Author a1 = new Author("zz","lz@gmail.com",'m',2020);
        Genre g = new Genre("fiction",99);
        Genre g2 = new Genre("dabba",9);
        ArrayList <Book> arrayList = new ArrayList<>();
        arrayList.add (new Book("boo1",a,102.5f,19,g));
        arrayList.add (new Book("aaa",a1,10.8f,2,g2));
        Collections.sort(arrayList);
        for(Book b: arrayList){
            System.out.println(b);
        } 


    }
    
}
