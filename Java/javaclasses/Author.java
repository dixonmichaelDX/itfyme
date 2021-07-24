import java.util.Comparator;
import java.lang.Comparable;
public class Author implements Comparable {
 
    String name;
    String email;
    char gender;
    int year ;
    public Author(String name, String email, char gender, int year) {
        this.name = name;
        this.email = email;
        this.gender = gender;
        this.year = year;
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
        return "Author [gender=" + gender + ", email=" + email + ", name=" + name + ",year=" +year+ "]";
    }

   // public int compareTo(Object s) {
        //System.out.println( this.toString() + " comparing with " + ((Student)s).toString());
      //  return name.compareTo(((Author)s).name) ;
    //}
    public int compareTo(Object s) {
        //System.out.println( this.toString() + " comparing with " + ((Student)s).toString());
        return email.compareTo(((Author)s).email) ;
    }
    
    // public int compareTo(Object s) {
    //     return (year - ((Author)s).year) ;
    // }  

    public static Comparator<Author> compareByName = new Comparator<Author>() {
    
        public int compare(Author a1, Author a2) {
            return a1.name.compareTo(a2.name);
        }
    };

    
    public static Comparator<Author> compareByYear = new Comparator<Author>() {
    
        public int compare(Author a1, Author a2) {
            return a1.year - a2.year;
        }
    };
    
    
}
