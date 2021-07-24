import java.util.*;
public class Stock implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int libraryID;
    int bookId;
    Date openingDate;
    int totalQty;
    int stockOnHand;
    public Stock(int libraryID, int bookId, Date openingDate, int totalQty, int stockOnHand) {
        this.libraryID = libraryID;
        this.bookId = bookId;
        this.openingDate = openingDate;
        this.totalQty = totalQty;
        this.stockOnHand = stockOnHand;
    }
    public int getLibraryID() {
        return libraryID;
    }
    public void setLibraryID(int libraryID) {
        this.libraryID = libraryID;
    }
    public int getBookId() {
        return bookId;
    }
    public void setBookId(int bookId) {
        this.bookId = bookId;
    }
    public Date getOpeningDate() {
        return openingDate;
    }
    public void setOpeningDate(Date openingDate) {
        this.openingDate = openingDate;
    }
    public int getTotalQty() {
        return totalQty;
    }
    public void setTotalQty(int totalQty) {
        this.totalQty = totalQty;
    }
    public int getStockOnHand() {
        return stockOnHand;
    }
    public void setStockOnHand(int stockOnHand) {
        this.stockOnHand = stockOnHand;
    }
    @Override
    public String toString() {
        return "Stock [LibraryID=" + libraryID + ", OpeningDate=" + openingDate + ", StockOnHand=" + stockOnHand
                + ", TotalQty=" + totalQty + ", bookId=" + bookId + "]";
    }
    
}
