public class Employee {
    int id;
    String firstName;
    String lastName;
    int salary;


    public Employee(int id, String firstName, String lastName, int salary) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.salary = salary;
    }
    public int getId() {
        return id;
    }

    public String getFirstName() {
        return firstName;
    }
    public String getLastName() {
        return lastName;
    }

    public int getSalary() {
        return salary;
    }
     
    public void setSalary(int salary) {
        this.salary = salary;
    }

    public String getName() {
        return this.firstName + this.lastName;
    }
    
    public int getAnnualSalary() {
        return (12 * this.salary);
    }
    public int raiseSalary (int percent) {
        int s=  salary * percent /100 ;
        this.salary = salary + s;
        return this.salary;

    }
    @Override
    public String toString() {
        return "Employee [firstName=" + firstName + ", id=" + id + ", lastName=" + lastName + ", salary=" + salary
                + "]";
    }

    
    
   
    
    
    
    
    
}
