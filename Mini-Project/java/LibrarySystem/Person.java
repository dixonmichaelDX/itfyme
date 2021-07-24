public class Person implements java.io.Serializable {
    private static final long serialVersionUID = 1L;
    int ID;
    String name;
    String emailID;
    int PhoneNum;
    public Person(int ID, String name, String emailID, int phoneNum) {
        this.ID = ID;
        this.name = name;
        this.emailID = emailID;
        PhoneNum = phoneNum;
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
    public String getEmailID() {
        return emailID;
    }
    public void setEmailID(String emailID) {
        this.emailID = emailID;
    }
    public int getPhoneNum() {
        return PhoneNum;
    }
    public void setPhoneNum(int phoneNum) {
        PhoneNum = phoneNum;
    }
    @Override
    public String toString() {
        return "Person [ID=" + ID + ", Name=" + name + ", PhoneNum=" + PhoneNum + ", emailID=" + emailID + "]";
    }
    
}
