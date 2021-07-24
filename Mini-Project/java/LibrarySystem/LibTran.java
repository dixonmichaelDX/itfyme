import java.util.*;
public class LibTran implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID;
    Date date;
    int LibraryID;
    int bookID;
    int Qty;
    public LibTran(int ID, Date date, int libraryID, int bookID, int qty) {
        this.ID = ID;
        this.date = date;
        LibraryID = libraryID;
        this.bookID = bookID;
        Qty = qty;
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
        return LibraryID;
    }
    public void setLibraryID(int libraryID) {
        LibraryID = libraryID;
    }
    public int getBookID() {
        return bookID;
    }
    public void setBookID(int bookID) {
        this.bookID = bookID;
    }
    public int getQty() {
        return Qty;
    }
    public void setQty(int qty) {
        Qty = qty;
    }
    @Override
    public String toString() {
        return "LibTran [ID=" + ID + ", LibraryID=" + LibraryID + ", Qty=" + Qty + ", bookID=" + bookID + ", date="
                + date + "]";
    }
    
}
