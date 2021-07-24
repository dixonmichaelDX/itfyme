import java.util.*;
public class Transaction implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID;
    Date date;
    int libraryID;
    int customerID;
    int bookID;
    char type;
    public Transaction(int ID, Date date, int libraryID, int customerID, int bookID, char type) {
        this.ID = ID;
        this.date = date;
        this.libraryID = libraryID;
        this.customerID = customerID;
        this.bookID = bookID;
        this.type = type;
    }
    public int getID() {
        return ID;
    }
    public void setID(int ID) {
        this.ID = ID;
    }
    public Date getDate() {
        return date;
    }
    public void setDate(Date date) {
        this.date = date;
    }
    public int getLibraryID() {
        return libraryID;
    }
    public void setLibraryID(int libraryID) {
        this.libraryID = libraryID;
    }
    public int getCustomerID() {
        return customerID;
    }
    public void setCustomerID(int customerID) {
        this.customerID = customerID;
    }
    public int getBookID() {
        return bookID;
    }
    public void setBookID(int bookID) {
        this.bookID = bookID;
    }
    public char getType() {
        return type;
    }
    public void setType(char type) {
        this.type = type;
    }
    @Override
    public String toString() {
        return "Transaction [CustomerID=" + customerID + ", ID=" + ID + ", LibraryID=" + libraryID + ", bookID="
                + bookID + ", date=" + date + ", type=" + type + "]";
    }
    
}
