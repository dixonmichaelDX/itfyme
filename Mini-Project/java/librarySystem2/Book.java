import java.util.Arrays;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
public class Book implements java.io.Serializable {
private static final long serialVersionUID = 1L;
private static final String bookfile = "./book.data" ;
    String title;
    String language;
    double price;
    int year;
    double editionNum;
    Author author;
    Publisher publisher;
    Cat category;
    int ISBN;
    int BookID;
    
    public String getTitle() {
        return title;
    }
    public void setTitle(String title) {
        this.title = title;
    }
    public String getLanguage() {
        return language;
    }
    public void setLanguage(String language) {
        this.language = language;
    }
    public double getPrice() {
        return price;
    }
    public void setPrice(double price) {
        this.price = price;
    }
    public int getYear() {
        return year;
    }
    public void setYear(int year) {
        this.year = year;
    }
    public double getEditionNum() {
        return editionNum;
    }
    public void setEditionNum(double editionNum) {
        this.editionNum = editionNum;
    }
    public Author getAuthor() {
        return author;
    }
    public void setAuthor(Author author) {
        this.author = author;
    }
    public Publisher getPublisher() {
        return publisher;
    }
    public void setPublisher(Publisher publisher) {
        this.publisher = publisher;
    }
   
    public Book(String title, String language, double price, int year, double editionNum, Author author,
            Publisher publisher, Cat category, int iSBN, int bookID) {
        this.title = title;
        this.language = language;
        this.price = price;
        this.year = year;
        this.editionNum = editionNum;
        this.author = author;
        this.publisher = publisher;
        this.category = category;
        ISBN = iSBN;
        BookID = bookID;
    }
    
    public Cat getCategory() {
        return category;
    }
    public void setCategory(Cat category) {
        this.category = category;
    }
    public int getISBN() {
        return ISBN;
    }
    public void setISBN(int iSBN) {
        ISBN = iSBN;
    }
    public int getBookID() {
        return BookID;
    }
    public void setBookID(int bookID) {
        BookID = bookID;
    }
    @Override
    public String toString() {
        return "Book [BookID=" + BookID + ", ISBN=" + ISBN + ", author=" + author + ", category="
                + category + ", editionNum=" + editionNum + ", language=" + language + ", price="
                + price + ", publisher=" + publisher + ", title=" + title + ", year=" + year + "]";
    }
    public static void save(ArrayList<Book> booklist) {
        System.out.print("Saving master book list in the file!!!");
        try {
            FileOutputStream fileOut =new FileOutputStream(bookfile);
            ObjectOutputStream out = new ObjectOutputStream(fileOut);
            out.writeObject(booklist);
            out.close();
            fileOut.close();
            System.out.println("Book data is saved!");
        } catch (IOException i) {
            i.printStackTrace();
        }
    }

    public static ArrayList<Book> initializeFromFile() {
        try {
            File f = new File(bookfile) ;
            if (!f.exists()) {
                return new ArrayList<Book>();
            }
            FileInputStream fileIn = new FileInputStream(bookfile);
            ObjectInputStream in = new ObjectInputStream(fileIn);
            ArrayList<Book> booklist  = (ArrayList<Book>) in.readObject();
            in.close();
            fileIn.close();
            return booklist ;
        } catch (IOException i) {
            i.printStackTrace();
            return null;
        } catch (ClassNotFoundException c) {
            System.out.println("Book class not found");
            c.printStackTrace();
            return null;
        }
    }
    public static Book add(ArrayList<Author> alist, ArrayList<Publisher> plist, ArrayList<Cat> clist) {
        String title;
        String language;
        double price;
        int year;
        double editionNum;
        int ISBN;
        int BookID;
        Author auth;
        Publisher pub ;
        Cat cat;
        int idx;
        System.out.println("Please enter title");
        title = (System.console().readLine());
        System.out.println("Please enter language");
        language = System.console().readLine();
        System.out.println("Please enter price");
        price = Double.parseDouble(System.console().readLine());
        System.out.println("Please enter year");
        year = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter edition number");
        editionNum = Double.parseDouble(System.console().readLine());
        System.out.println("Please enter ISBN number");
        ISBN = Integer.parseInt(System.console().readLine());
        System.out.println("Please enter bookid ");
        BookID = Integer.parseInt(System.console().readLine());
        
        //nowget the authordetails
        System.out.println("Please enter authorID");
        int authorid = Integer.parseInt(System.console().readLine());

        //now if this author is already there... there is no needto create newone
        idx = Author.findByID(alist, authorid) ;
        if (idx == -1) {
            auth = Author.add() ;
        } else {
            auth = alist.get(idx) ;
        }

        //nowget the publisher details
        System.out.println("Please enter PublisherID");
        int pid = Integer.parseInt(System.console().readLine());

        //now if this author is already there... there is no needto create newone
        idx = Publisher.findById(plist, pid) ;
        if (idx == -1) {
            pub = Publisher.add() ;
        } else {
            pub = plist.get(idx) ;
        }

        //nowget the catogory details
        System.out.println("Please enter CategoryID");
        int catid = Integer.parseInt(System.console().readLine());

        idx = Cat.findByID(clist, catid) ;
        if (idx == -1) {
            cat = Cat.add() ;
        } else {
            cat = clist.get(idx) ;
        }  
        return new Book (title, language, price, year, editionNum, auth, pub, cat, ISBN, BookID);
    }


    public static Book update(Book book) {
        System.out.println("BookInformation is:\n");
        System.out.println(book);
        System.out.println("if you dont want to update please press enter \n");
        System.out.println("Please update title ");
        String title = System.console().readLine();
        if (title.equals("")) {
            book.title = book.title;
        } else {
            book.title= title;
        }
        System.out.println("Please update language ");
        String language = System.console().readLine();
        if (title.equals("")) {
            book.language = book.language;
        } else {
            book.language = language;
        }
        System.out.println("Please update price ");
        String price = System.console().readLine();
        if (price.equals("")) {
            book.price = book.price;
        } else {
            book.price = Double.parseDouble(price);
        }
        System.out.println("Please update year ");
        String year= System.console().readLine();
        if (year.equals("")) {
            book.year= book.year;
        } else {
            book.year = Integer.parseInt(year);
        }

        System.out.println("Please edition num ");
        String editionNum= System.console().readLine();
        if (editionNum.equals("")) {
            book.editionNum = book.editionNum;
        } else {
            book.editionNum = Double.parseDouble(editionNum);
        }
        Author.update(book.author);
        Publisher.update(book.publisher);
        Cat.update(book.category);
        return book ;
    }

    /*public static int showUpdateMenu(Book book){
        System.out.println("Book Information is:");
        System.out.println(book);  
        System.out.println("enter which field you want to upadate");
        System.out.println("enter 1-to upadate Title\n");
        System.out.println("enter 2-to upadate language\n");
        System.out.println("enter 3-to upadate price\n");
        System.out.println("enter 4-to upadate year\n");
        System.out.println("enter 5-to upadate editionName\n");
        System.out.println("enter 6-to update author\n" );
        System.out.println("enter 7-to publisher \n");
        System.out.println("enter 8-to Category \n");
        int choice = 10;
        try {
            choice = Integer.parseInt(System.console().readLine());
            switch(choice) {
                case 1 :
                    String title; 
                    System.out.println("Please update title ");
                    title = System.console().readLine();
                    System.out.println("read name is " + title);
                    book.title = title ;
                    System.out.println("Updated name is " + book.title);
                break;

                case 2 :
                    String language;
                    System.out.println("Please update title ");
                    language= System.console().readLine();
                    System.out.println("read name is " + language);
                    book.language = language ;
                    System.out.println("Updated name is " + book.language);
                    break;

                case 3 :
                    double price;
                    System.out.println("Please update price ");
                    price = Double.parseDouble(System.console().readLine());
                    System.out.println("read price is " + price);
                    book.price = price;
                    System.out.println("Updated name is " + book.price);
                    break;

                case 4 :
                    int year;
                    System.out.println("Please update price ");
                    year = Integer.parseInt(System.console().readLine());
                    System.out.println("read price is " + year);
                    book.year = year;
                    System.out.println("Updated name is " + book.year);
                    break;

                case 5 :
                    double editionNum;;
                    System.out.println("Please update EditionNum ");
                    editionNum= Double.parseDouble(System.console().readLine());
                    System.out.println("read price is " + editionNum);
                    book.editionNum = editionNum;
                    System.out.println("Updated name is " + book.editionNum);
                    break;
                  
                case 6:
                    Author.update(book.author);
                    break;
                case 7 :
                    Publisher.update(book.publisher);
                    break;
                case 8 :
                    Cat.update(book.category);
                    break;
                case 10 :
                    System.out.println("stop");
                    break;
            }
        } catch (Exception c) {
            choice = -1 ;
            System.out.println("Please enter either 1 or 2 or 3 or 5 or 6 or 7 or 8 or 10");
        }
        return choice;

        
    }*/
    
    

    
    public static int findByID(ArrayList<Book> list, int iSBN) {
        int idx = -1;
        int size = list.size() ;
        for (int i = 0; i < size; i++) {
            if (list.get(i).getISBN() == iSBN) {
                idx = i ;
            }
        }
        return idx ;
    }



    
}
