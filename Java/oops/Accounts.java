public class Accounts {
    String id;
    String name;
    int balance;
    public Accounts(String id, String name) {
        this.id = id;
        this.name = name;
        
    }
    public Accounts(String id, String name, int balance) {
        this.id = id;
        this.name = name;
        this.balance = balance;
    }
    public String getId() {
        return id;
    }
    
    public String getName() {
        return name;
    }
    
    public int getBalance() {
        return balance;
    }
    public int credit(int amount) {
        this.balance += amount;
        return this.balance ;

    }
    public int debit(int amount) {
        if(amount <= balance){
            this.balance -= amount;
            return this.balance;
        } else {
            System.out.println("Amount exceed the balance");
            return balance ;
     
        }

    }

    public int transferTo(Accounts a,int amount) {
        if(amount <= balance) {
            a.balance += amount;
            return a.balance;
        } else {
            System.out.println("Amount exceed the balance");
            return 0;


        }
    }
    @Override
    public String toString() {
        return "Accounts [balance=" + balance + ", id=" + id + ", name=" + name + "]";
    }
    



    
}
