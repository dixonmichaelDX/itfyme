public class Category implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID;
    String name;
    public Category(int ID, String name) {
        this.ID = ID;
        this.name = name;
    }
    public int getID() {
        return ID;
    }
    public void setID(int ID) {
        this.ID = ID;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    @Override
    public String toString() {
        return "Category [ID=" + ID + ", name=" + name + "]";
    }

    
}
