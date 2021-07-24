public class Library implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID;
    String name;
    Address address;
    Person librarian;
    public Library(int ID, String name, Address address, Person librarian) {
        this.ID = ID;
        this.name = name;
        this.address = address;
        this.librarian = librarian;
    }
    public int getID() {
        return ID;
    }
    public void setID(int iD) {
        ID = iD;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public Address getAddress() {
        return address;
    }
    public void setAddress(Address address) {
        this.address = address;
    }
    public Person getLibrarian() {
        return librarian;
    }
    public void setLibrarian(Person librarian) {
        this.librarian = librarian;
    }
    @Override
    public String toString() {
        return "Library [ID=" + ID + ", Librarian=" + librarian + ", Name=" + name + ", address=" + address + "]";
    }
    
}
