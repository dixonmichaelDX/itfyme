public class BookTest {
    public static void main(String[] args) {
       // Construct an author instance
       Author[] authors = new Author[2];
       //Author ahTeck = new Author("Tan Ah Teck", "ahteck@nowhere.com", 'm');
       authors[0] = new Author("raj", "raj&@gmail", 'f');
       authors[1] = new Author("raj", "raj&@gmail", 'f');

        System.out.println(ahTeck);  // Author's toString()

        // construct Genre
        Genre fiction = new Genre("Fiction", 10);
        Genre nonFiction = new Genre("Non Fiction", 11);
        Book dummyBook = new Book("Java for dummy", ahTeck, 19.95f, 99, fiction);  // Test Book's Constructor
        System.out.println(dummyBook);  // Test Book's toString()

    

        // Test Getters and Setters
        dummyBook.setPrice(29.95f);
        dummyBook.setQty(28);
        System.out.println("name is: " + dummyBook.getName());
        System.out.println("price is: " + dummyBook.getPrice());
        System.out.println("qty is: " + dummyBook.getQty());
        System.out.println("Author is: " + dummyBook.getAuthor[]());  // Author's toString()
        System.out.println("Author's name is: " + dummyBook.getAuthor[]().getName());
        System.out.println("Author's email is: " + dummyBook.getAuthor().getEmail());

        // Use an anonymous instance of Author to construct a Book instance
        Book anotherBook = new Book("more Java",  new Author("Paul Tan", "paul@somewhere.com", 'm'), 29.95f, nonFiction);
            //new Author("Paul Tan", "paul@somewhere.com", 'm'), 29.95, nonFiction);
        System.out.println(anotherBook);  // toString()

    }
 }
 