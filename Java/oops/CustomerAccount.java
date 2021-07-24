public class CustomerAccount {
    int id;
    CustomerAcc customer;
    double balance;
    public CustomerAccount(int id, CustomerAcc customer, double balance) {
        this.id = id;
        this.customer = customer;
        this.balance = balance;
    }
    public CustomerAccount(int id, CustomerAcc customer) {
        this.id = id;
        this.customer = customer;
    }
    @Override
    public String toString() {
        return "CustomerAccount [balance=" + balance + ", customer=" + customer + ", id=" + id + "]";
    }
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public CustomerAcc getCustomer() {
        return customer;
    }
    public void setCustomer(CustomerAcc customer) {
        this.customer = customer;
    }
    public double getBalance() {
        return balance;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
    public String getCustomerName() {
        return customer.getName();
    }
    public CustomerAccount deposit(double amount) {
        balance += amount;
        return this;

    }

    public CustomerAccount withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return this;
        }
        System.out.println("amount withdrawn exceeds the current balance!");
        return this;

    }
    
}
