import java.lang.reflect.Array;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Random;
import java.util.Date;

public class LibSystem {

    static ArrayList<City> citylist ;
    static ArrayList<State> statelist ;
    static ArrayList<Cat> catlist; 
    static ArrayList<Publisher> publist; 
    static ArrayList<Author> authlist ; 
    static ArrayList<Book> booklist ; 
    static ArrayList<Library> liblist ; 
    static ArrayList<Customer> custlist; 
    public static void main(String args[]){
        
        catlist = new ArrayList<>(); 
        // publist = new ArrayList<>(); 
        authlist = new ArrayList<>(); 
        booklist = new ArrayList<>(); 
        liblist = new ArrayList<>(); 
        statelist = State.initializeFromFile();
        citylist = City.initializeFromFile();
        catlist = Cat.initializeFromFile();
        publist = Publisher.initializeFromFile(); 
        System.out.println(citylist);
        System.out.println(statelist);
        System.out.println(catlist);
        System.out.println(publist);
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
                default:
                    System.out.println("Wrong input, input either 1 or 2 or 3 please!");
            }
        } catch (Exception c) {
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
        System.out.println("3. For Cat");
        System.out.println("5. For Publisher");
        System.out.println("100. To Exit");
        System.out.println("=======================================================");
        System.out.println("================   By ITfyMe Studnets!  ===============");
        System.out.println("=======================================================");
        int userChoice = 4;
        try {
            userChoice = Integer.parseInt(System.console().readLine());
            if (userChoice != 4) {
                doMaster(userChoice);
            }
        } catch (Exception c) {
            System.out.println("Please enter either 1 or 2 or 3");
        }
        return userChoice;
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

    public static void doCreateMaster(int master) {
        int id ;
        String name;
        switch (master) {
            case 1:
                // create city master
                System.out.println("Please enter city id");
                id = Integer.parseInt(System.console().readLine());
                System.out.println("Please enter city name");
                name = System.console().readLine();
                citylist.add(new City(id,name)) ;
                break ;
            case 2:
                // create state master
                System.out.println("Please enter state id");
                id = Integer.parseInt(System.console().readLine());
                System.out.println("Please enter state name");
                name = System.console().readLine();
                statelist.add(new State(id,name)) ;
                break ;
            case 3:
                // create Cat master
                System.out.println("Please enter Cat id");
                id = Integer.parseInt(System.console().readLine());
                System.out.println("Please enter Cat name");
                name = System.console().readLine();
                catlist.add(new Cat(id,name));
                break ;
            case 5:
                // create publisher Master
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
                Publisher p = new Publisher(id,name,a,email);
                //System.out.println(p);
                publist.add(p);
                break;

            case 6:
               //Customer master
               System.out.println("Please enter customer id");
               id = Integer.parseInt(System.console().readLine());
               System.out.println("Please enter num of books");
               int numOfBook = Integer.parseInt(System.console().readLine());
               System.out.println("enter the joing date");
               String date = System.console().readLine();
              // Date date1 = new SimpleDateFormat("dd/MM/yyyy").parse(date);



            default:
                break ;
        }
    }

    public static void doUpdateMaster(int master) {
    }

    public static void doSaveMaster(int master) {
        switch (master) {
            case 1:
                // create city master
                City.save(citylist);
            case 2:
                // create city master
                State.save(statelist);
            case 3:
                // create city master
                Cat.save(catlist);
            case 5:
                Publisher.save(publist);
            case 6:
                Customer.save(custlist);
        }
    }

    public static void showTransactionMenu() {
        System.out.println("Transaction!");
    }
    public static void showReportMenu() {
        System.out.println("Report!");
    }
}