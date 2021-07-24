
import java.lang.Thread;
public class JThread extends Thread {
    public void run() {
        System.out.println("in thread class");
        System.out.println(this.getId());
    }
    
}
