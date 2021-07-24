public class Dog  extends Mammels {

    public Dog() {

    }
    public Dog(String name) {
        
    }
    public void greets() {
        System.out.println("woof");

    }
    public void greets( Dog another) {
        System.out.println("woooooof");

    }

    @Override
    public String toString() {
        return "Dog []";
    }
    
    
}
