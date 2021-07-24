public class Book implements java.io.Serializable {
    private static final long serialVersionUID = 1L; 
    String name;
    AuthorSer author;
    float price;
    int qty;
    
    public Book(String name, AuthorSer author, float price, int qty) {
        this.name = name;
        this.author = author;
        this.price = price;
        this.qty = qty;
       
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public AuthorSer getAuthor() {
        return author;
    }
    public void setAuthor(AuthorSer author) {
        this.author = author;
    }
    public float getPrice() {
        return price;
    }
    public void setPrice(float price) {
        this.price = price;
    }
    public int getQty() {
        return qty;
    }
    public void setQty(int qty) {
        this.qty = qty;
    }
    
    
    public Book(String name, AuthorSer author, float price) {
        this.name = name;
        this.author = author;
        this.price = price;
       
    }
    
    public String toString() {
        //String str = author[0].toString() + author[1].toString();
        return "Book [author=" + author + ", name=" + name + ", price=" + price + ", qty=" + qty
                + "]";
    }
    
}
