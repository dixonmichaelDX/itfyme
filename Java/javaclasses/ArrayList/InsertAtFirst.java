import java.util.ArrayList;
import java.util.Iterator;
public class InsertAtFirst {
    public static void main(String [] args) {
        ArrayList<String> color = new ArrayList<>();
        color.add("blue");
        color.add("red");
        color.add("yellow");
        color.add("pink");

        color.add(0, "black");

        for (int i= 0 ;i<color.size(); i++){
            System.out.println(color.get(i));
        }
    }
    
    
}
