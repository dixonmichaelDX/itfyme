public class Invoice {
    int id;
    Customer customer;
    double amount;
    public Invoice(int id, Customer customer, double amount) {
        this.id = id;
        this.customer = customer;
        this.amount = amount;
    }
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public Customer getCustomer() {
        return customer;
    }
    public void setCustomer(Customer customer) {
        this.customer = customer;
    }
    public double getAmount() {
        return amount;
    }
    public void setAmount(double amount) {
        this.amount = amount;
    }
    @Override
    public String toString() {
        return "Invoice [amount=" + amount + ", customer=" + customer + ", id=" + id + "]";
    }

    public double getAmountAfterDiscountt() {
        //int d = customer.getDiscount();
        //this.amount = this.amount - (d/100 * amount);  
        return amount -(amount*customer.getDiscount()/100);  
    }

    public int  getCustomerId() {
        //return customer.getId();
        return customer.id;

    }
    public String  getCustomerName() {
       // return customer.getName();
        return customer.name;

    }
    public int  getCustomerDiscount() {
       // return customer.getDiscount();
        return customer.discount;

    }
    
}
