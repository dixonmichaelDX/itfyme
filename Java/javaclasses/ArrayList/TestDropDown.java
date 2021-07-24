import java.util.ArrayList;
import java.util.*;

public class TestDropDown {
    public static void main(String [] args)  {
        ArrayList <String>  list = new ArrayList<>();
        list.add("karanataka");
        list.add("andra");
        list.add("tamil");
        list.add("kerala");
        DropDown d = new DropDown () ;
        System.out.println(d.getIndex());


    }

}
