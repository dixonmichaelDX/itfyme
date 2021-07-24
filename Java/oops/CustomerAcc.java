public class CustomerAcc {
    int id;
    String name;
    char gender;
    public CustomerAcc(int id, String name, char gender) {
        this.id = id;
        this.name = name;
        this.gender = gender;
    }
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public char getGender() {
        return gender;
    }
    public void setGender(char gender) {
        this.gender = gender;
    }
    @Override
    public String toString() {
        return "CustomerAcc [gender=" + gender + ", id=" + id + ", name=" + name + "]";
    }

    
}
