
public class Author implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID ;
    String name;
    Address address;
    String email;
    public Author(int iD, String name, Address address, String email) {
        ID = iD;
        this.name = name;
        this.address = address;
        this.email = email;
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
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    @Override
    public String toString() {
        return "Author [ID=" + ID + ", address=" + address + ", email=" + email + ", name=" + name + "]";
    }
    
}
