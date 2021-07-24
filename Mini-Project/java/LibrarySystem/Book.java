public class Book implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    String title;
    Author author;
    Category category[];
    int iSBN;
    Publisher publisher;
    double price;
    int bookId;
    int yearOfPublication;
    double editionNumber;
    String language;
    public Book(String title, Author author, Category[] category, int iSBN, Publisher publisher, double price,
            int bookId, int yearOfPublication, double editionNumber, String language) {
        this.title = title;
        this.author = author;
        this.category = category;
        this.iSBN = iSBN;
        this.publisher = publisher;
        this.price = price;
        this.bookId = bookId;
        this.yearOfPublication = yearOfPublication;
        this.editionNumber = editionNumber;
        this.language = language;
    }
    public String getTitle() {
        return title;
    }
    public void setTitle(String title) {
        this.title = title;
    }
    public Author getAuthor() {
        return author;
    }
    public void setAuthor(Author author) {
        this.author = author;
    }
    public Category[] getCategory() {
        return category;
    }
    public void setCategory(Category[] category) {
        this.category = category;
    }
    public int getISBN() {
        return iSBN;
    }
    public void setISBN(int iSBN) {
        this.iSBN = iSBN;
    }
    public Publisher getPublisher() {
        return publisher;
    }
    public void setPublisher(Publisher publisher) {
        this.publisher = publisher;
    }
    public double getPrice() {
        return price;
    }
    public void setPrice(double price) {
        this.price = price;
    }
    public int getBookId() {
        return bookId;
    }
    public void setBookId(int bookId) {
        this.bookId = bookId;
    }
    public int getYearOfPublication() {
        return yearOfPublication;
    }
    public void setYearOfPublication(int yearOfPublication) {
        this.yearOfPublication = yearOfPublication;
    }
    public double getEditionNumber() {
        return editionNumber;
    }
    public void setEditionNumber(double editionNumber) {
        this.editionNumber = editionNumber;
    }
    public String getLanguage() {
        return language;
    }
    public void setLanguage(String language) {
        this.language = language;
    }
    @Override
    public String toString() {
        return "Book [ISBN=" + iSBN + ", author=" + author + ", bookId=" + bookId + ", category="
                + category.toString() + ", editionNumber=" + editionNumber + ", language=" + language + ", price="
                + price + ", publisher=" + publisher + ", title=" + title + ", yearOfPublication=" + yearOfPublication
                + "]";
    };
}