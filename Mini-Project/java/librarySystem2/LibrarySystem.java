import java.lang.reflect.Array;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Random;

public class LibrarySystem {

    static ArrayList<City> citylist ;
    static ArrayList<State> statelist ;
    static ArrayList<Cat> catlist; 
    static ArrayList<Publisher> publist; 
    static ArrayList<Author> authlist ; 
    static ArrayList<Book> booklist ; 
    static ArrayList<Library> liblist ; 
    static ArrayList<Customer> custlist; 
    static ArrayList<Bookstock> stocklist;
    static ArrayList<LibTran> tranlist;
    public static void main(String args[]){
       // catlist = new ArrayList<>(); 
        //publist = new ArrayList<>(); 
        //authlist = new ArrayList<>(); 
        //booklist = new ArrayList<>(); 
        //liblist = new ArrayList<>(); 
         // just call bookstock
        stocklist = new ArrayList<>();
        stocklist.add(new Bookstock(1, 1, 100, new Date(), 100));
        stocklist.add(Bookstock.add());
        stocklist.add(Bookstock.add());
        System.out.println(stocklist);
         Bookstock.save(stocklist);

        ArrayList<Bookstock> nblist = Bookstock.initializeFromFile() ;
        System.out.println(stocklist);
        Bookstock.viewAvaiableBooks(nblist, 2);
        Bookstock.viewAvaiableBooks(nblist, -1);
        System.out.println("Book issued!");
        Bookstock.IssueOrReceipt(nblist.get(1), -1);
        Bookstock.viewAvaiableBooks(nblist, -1);
        System.out.println("Book Received!");
        Bookstock.IssueOrReceipt(nblist.get(1), 1);
        Bookstock.viewAvaiableBooks(nblist, -1);
        // retrieve again
      
       // stocklist = Bookstock.initializeFromFile() ;
        tranlist = LibTran.initializeFromFile();
        statelist = State.initializeFromFile();
        citylist = City.initializeFromFile();
        catlist = Cat.initializeFromFile();
        booklist = Book.initializeFromFile();
        liblist = Library.initializeFromFile();
        authlist = Author.initializeFromFile();
        publist = Publisher.initializeFromFile();
        custlist = Customer.initializeFromFile();
        
        // now lets do some transaction
        // when user takes a book from the library
        // then we need to update entry in stocklist for that book 
        // and we need to add new entry in tranlist
        char type = 'I';
        char qty = 1 ;
        int libid = 1 ;
        int bookid = 3;
        int custid = 1 ;
        int transid = 1 ; // ideally this should be auto generated and increment sequentially
        LibTran tran = new LibTran(type,custid, transid, new Date(), libid, bookid, qty) ;
        tranlist.add(tran) ;
        int id  = Bookstock.findByID(stocklist, libid, bookid) ; // reduce or increse the stock
        Bookstock.IssueOrReceipt(stocklist.get(id),  type == 'I' ? -qty : qty) ;
        
        type = 'R';
        // qty = 1 ;
        transid = 2 ;
        tran = new LibTran(type, custid, transid, new Date(), libid, bookid, qty) ;
        tranlist.add(tran) ;
        LibTran.save(tranlist);
        id  = Bookstock.findByID(stocklist, libid, bookid) ;
        Bookstock.IssueOrReceipt(stocklist.get(id),  type == 'I' ? -qty : qty) ;
        Bookstock.save(stocklist);
       //return;
       

       System.out.println(citylist);
        System.out.println(statelist);
        System.out.println(catlist);
        System.out.println(booklist);
        System.out.println(liblist);
        System.out.println(authlist);
        System.out.println(publist);
        System.out.println(custlist);
        System.out.println(stocklist);
        System.out.println(tranlist);
        int choice = showMainMenu();
        while (choice != 4) {
            choice = showMainMenu();
        }
    }

   
    public static int showMainMenu() {
        // about menu system
        // 1 for Master, 2 for Transaction and 3 for Reports
        System.out.println("=======================================================");
        System.out.println("==============Multi Location Library System============");
        System.out.println("=======================================================");
        System.out.println("Use Following options to interact with System!");
        System.out.println("1. For Master");
        System.out.println("2. For Transaction");
        System.out.println("3. For Reports");
        System.out.println("4. To Exit");
        System.out.println("=======================================================");
        System.out.println("================   By ITfyMe Studnets!  ===============");
        System.out.println("=======================================================");
        int userChoice = 4;
        try {
            userChoice = Integer.parseInt(System.console().readLine());
            switch (userChoice) {
                case 1:
                    handleMaster();
                    break ;
                case 2:
                    showTransactionMenu();
                    break ;
                case 3:
                    showReportMenu();
                    break ;
                case 4:
                    System.out.println("Exising the Library system. Goob bye!");
                    break;
                default:
                    System.out.println("Wrong input, input either 1 or 2 or 3 please!");
                    userChoice = -1 ;
                    break ;
            }
        } catch (Exception c) {
            userChoice = -1 ;
            System.out.println("Please enter either 1 or 2 or 3");
        }
        return userChoice;
    }

    public static void handleMaster() {
        int choice = showMasterMenu();
        while (choice != 100) {
            choice = showMasterMenu();
        }
    }
    public static int showMasterMenu() {
        System.out.println("=======================================================");
        System.out.println("                Master Maintenance");
        System.out.println("=======================================================");
        System.out.println("Use Following commands to maintain master");
        System.out.println("1. For City");
        System.out.println("2. For State");
        System.out.println("3. For Category");
        System.out.println("4. For Publisher");
        System.out.println("5. For Author");
        System.out.println("6. For Book");
        System.out.println("7. For Library");
        System.out.println("8. For Customer");
        System.out.println("9. For Viewing All");
        System.out.println("100. To Exit");
        System.out.println("=======================================================");
        System.out.println("================   By ITfyMe Studnets!  ===============");
        System.out.println("=======================================================");
        int userChoice = 100;
        try {
            userChoice = Integer.parseInt(System.console().readLine());
            if (userChoice != 100) {
                if (userChoice == 9) {
                    viewAll();
                } else {
                    doMaster(userChoice);
                }
            }
        } catch (Exception c) {
            System.out.println("Please enter either 1 or 2 or 3");
        }
        return userChoice;
    }

    public static void viewAll() {
        System.out.println(citylist);
        System.out.println(statelist);
        System.out.println(catlist);
        System.out.println(publist);
        System.out.println(liblist);
        return;
    }
    public static int doMaster(int master) { // this can be city, state, etc... depending on the number passed
        // what are all the different operation can you do?
        // you can create, update , delete or view ??
        int userChoice = 5;
        System.out.println("What do you want to do?");
        System.out.println("1 for create");
        System.out.println("2 for update/modify");
        System.out.println("3 for delete");
        System.out.println("4 for view");
        System.out.println("5 for save");
        System.out.println("6 for exit");
        try {
            userChoice = Integer.parseInt(System.console().readLine());
            switch (userChoice) {
                case 1:
                    doCreateMaster(master) ;
                    break ;
                case 2:
                    doUpdateMaster(master) ;
                    break ;
                case 5:
                    doSaveMaster(master);
                    break ;
                default:
                    break ;
            }
        } catch (Exception c) {
            System.out.println("Please enter either 1 or 2 or 3");
        }
        return userChoice;
    }

    public static void doCreateMaster(int master) throws ParseException {
        int id ;
        String name;
        switch (master) {
            case 1:
                // create city master
                City city = City.add() ;
                if (city != null) {
                    citylist.add(city) ;
                }
                break ;
            case 2:
                // create state master
                State state = State.add() ;
                statelist.add(state) ;
                break ;
            case 3:
                // create Cat master
                Cat cat = Cat.add() ;
                catlist.add(cat);
                break ;
            case 4:
                //create Publisher Master
                Publisher pub = Publisher.add();
                publist.add(pub);
                break;
            case 5 :
                //create author 
                Author auth = Author.add();
                authlist.add(auth);
                break;
            case 6 :
                //Create Book
                Book book = Book.add(authlist,publist,catlist);
                booklist.add(book);
                break;
            case 7 :
                //Create Library
                Library lib = Library.add();
                liblist.add(lib);
                break;
            case 8:
                Customer cust = Customer.add();
                custlist.add(cust);
            default:
                break ;
        }
    }

    public static void doUpdateMaster(int master) {
        int id;
        int idx;

        switch(master) {
            case 1:
                System.out.println("Please enter the ID of the city for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = City.findByID(citylist, id) ;
                if (idx == -1) {
                    System.out.print("No city found with id " + id);
                } else {
                    citylist.set(idx,City.update(citylist.get(idx)));
                }
                break ;
            case 2:
                // udpate state master
                System.out.println("Please enter the ID of the State for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = State.findByID(statelist, id) ;
                if (idx == -1) {
                    System.out.print("No state found with id " + id);
                } else {
                    statelist.set(idx,State.update(statelist.get(idx)));
                }
                break ;
            case 3://category
                System.out.println("Please enter the ID of the Category for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Cat.findByID(catlist, id) ;
                if (idx == -1) {
                    System.out.print("No Category found with id " + id);
                } else {
                    catlist.set(idx,Cat.update(catlist.get(idx)));
                }
                break ;
            case 4:
                System.out.println("Please enter the ID of the publisher for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Publisher.findById(publist, id) ;
                if (idx == -1) {
                    System.out.print("No Category found with id " + id);
                } else {
                    publist.set(idx,Publisher.update(publist.get(idx)));
                }
                break ;
            case 5:
                System.out.println("Please enter the ID of the Author for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Author.findByID(authlist, id) ;
                if (idx == -1) {
                    System.out.print("No Author found with id " + id);
                } else {
                    authlist.set(idx,Author.update(authlist.get(idx)));
                }
                break ;
            case 6 ://book
                System.out.println("Please enter the ID of the book for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Book.findByID(booklist, id) ;
                if (idx == -1) {
                    System.out.print("No book found with id " + id);
                } else {
                    booklist.set(idx,Book.update(booklist.get(idx)));
                }
                break ;
            case 7 ://Library
                System.out.println("Please enter the ID of the Library for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Library.findByID(liblist, id) ;
                if (idx == -1) {
                    System.out.print("No Libray found with id " + id);
                } else {
                    liblist.set(idx,Library.update(liblist.get(idx)));
                }
                break ;
            case 8:
                System.out.println("Please enter the ID of the Customer for which you want to update");
                id = Integer.parseInt(System.console().readLine()) ;
                idx  = Customer.findByID(custlist, id) ;
                if (idx == -1) {
                    System.out.print("No Libray found with id " + id);
                } else {
                    custlist.set(idx,Customer.update(custlist.get(idx)));
                }
                break ;
            default :
                System.out.println("enter the valid number between 1-8");
                break;


            
               
        }
    }

    public static void doSaveMaster(int master) {
        switch (master) {
            case 1:
                // create city master
                City.save(citylist);
                break;
            case 2:
                // save state master
                State.save(statelist);
                break;
            case 3:
                // create city master
                Cat.save(catlist);
                break;
            case 4:
                // create publisher master
                Publisher.save(publist);
                break;
            case 5:
            // createbook master
                System.out.println(authlist);
                Author.save(authlist);
                break;
            case 6:
                // createbook master
                System.out.println(authlist);
                Book.save(booklist);
                break;
            case 7:
            // createbook master
                Library.save(liblist);
                break;
            case 8:
                Customer.save(custlist);
                break;
               

        }
    }

    public static void showTransactionMenu() {
        System.out.println("Transaction!");
    }
    public static void showReportMenu() {
        System.out.println("Report!");
    }
}