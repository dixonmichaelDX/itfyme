public class Author {
    String name;
    String email;
    char gender;
    public Author(String name, String email, char gender) {
        this.name = name;
        this.email = email;
        this.gender = gender;
    }
    public String getName() {
        return name;
    }
   
    public String getEmail() {
        return email;
    }
    public void setMail(String email) {
        this.email = email;
    }
    public char getGender() {
        return gender;
    }
    @Override
    public String toString() {
        return "Author [gender=" + gender + ", email=" + email + ", name=" + name + "]";
    }
    
    
}
