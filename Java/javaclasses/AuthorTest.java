import java.util.*;
public class AuthorTest {
    public static void main(String[] args) {
        ArrayList<Author> arrayList = new ArrayList<>();
        arrayList.add(new Author("au1","au@gmail.com",'f',2020));
        arrayList.add(new Author("aaa","ab@gmail.com",'m',1997));
        arrayList.add(new Author("aw","aw@gmail.com",'f',1998));
        System.out.println("Sort by Comparable - Name");
        Collections.sort(arrayList);
        for(Author a : arrayList){
            System.out.println(a);
        }    



        System.out.println("Sort by Comparator - Name");
        Collections.sort(arrayList, Author.compareByName);
        for(Author str: arrayList) {
            System.out.println(str);
        }

        System.out.println("Sort by Comparator - Year");
        Collections.sort(arrayList, Author.compareByYear);
        for(Author str: arrayList){
            System.out.println(str);
        }

    }    
}
