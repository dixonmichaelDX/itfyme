import java.util.*;
import java.util.Collection;
import java.util.Iterator;
public class StringList1 {
    public static void main(String [] args) {
        ArrayList<String> color = new ArrayList<>();
        color.add("blue");
        color.add("red");
        color.add("yellow");
        color.add("pink");

        //printing....
        System.out.println("==========printing================="); 
        System.out.println(color.get(0));
        System.out.println(color.get(1));
        System.out.println(color.get(2));
        System.out.println(color.get(3));

        //iterating...
        System.out.println("==========Iterating================="); 
        Iterator<String> colors = color.iterator();
        while (colors.hasNext())  {
            System.out.println(colors.next());
        }

        //adding at first place
        System.out.println("==========addingatfisrt================="); 
        color.add(0, "black");
        for (int i= 0 ;i<color.size(); i++){
            System.out.println(color.get(i));
        }
        //getting element at specific index retriving
        System.out.println("==========specific ================="); 
        System.out.println(color.get(2));

        //updating specific array elements with given element
        System.out.println("=============updating specific element================="); 
        color.set(1, "gray");
        System.out.println("after updating.."+color);
    
        

        //removing 3rd element
        System.out.println("==========removing 3rd element================="); 
        color.remove(3);
        System.out.println("after removing ArrayLists: "+ color);

        System.out.println("==========Searching specific element ================="); 
        //searching an specific element
        System.out.println(color.contains("black"));

        //sort given array
        System.out.println("==========Sort================="); 
        Collections.sort(color);
        System.out.println("after sorting ArrayLists: "+ color);

       //copy elements of 1 arraylist to another
       
       System.out.println("==========copying=================");
       ArrayList <String> colorscopy = new ArrayList<>();
       colorscopy.add("pink");
       colorscopy.add("white");
       colorscopy.add("white");
       colorscopy.add("white");
       colorscopy.add("white");
       colorscopy.add("pink");
       colorscopy.add("pink");
       colorscopy.add("pink");
       Collections.copy(colorscopy,color);
       System.out.println("coping to ArrayLists colorscopy: "+ colorscopy);
       
       //shuffle elements in a array list.
        System.out.println("==========Shuffle================="); 
        Collections.shuffle(color);
        System.out.println("after shuffeling ArrayLists: "+ color);

        // reverse elements in a array list.
        System.out.println("==========Reverse=================");  
        Collections.reverse(color);
        System.out.println("reverse ArrayLists: "+ color);

        //extract a portion of a array list. 
        System.out.println("==========sublist================="); 
        System.out.println(color.subList(0, 2));

        //comparing two arraylist elements
        System.out.println("==========Comparing================="); 
        ArrayList <String> c1 = new ArrayList<>();
        c1.add("blue");
        c1.add("white");
        c1.add("pink");
        System.out.println(color.equals(c1));

        //swap two elements in an array list.
        System.out.println("==========swap================="); 
        System.out.println("before swapping arraylist"+color); 
        Collections.swap(color, 1, 3);
        System.out.println("after swapping arraylist"+color);



        // join two array lists. 
        System.out.println("==========Joining================="); 
        System.out.println("before joining array lists."+color);
        color.addAll(c1);
        System.out.println("Joined ArrayLists: "+ color);
                           
        //clone an array list to another array list. 
        System.out.println("==========clone================="); 
        ArrayList c2 = (ArrayList)color.clone();
        System.out.println("clone an array to another: "+ c2);

        //to empty an array list.
        System.out.println("==========emptying=================");  
        //c2.removeAll(c2);
        c2.clear();
        System.out.println("after removing: "+ c2);

        //test an array list is empty or not.
        System.out.println("=========empty=========");
        System.out.println(c2.isEmpty());

       //trim the capacity of an array list the current list size.
       System.out.println("==========triming================="); 
       System.out.println("before triming arraylistsize"+colorscopy.size()) ;
       colorscopy.trimToSize();
       System.out.println("after triming arraylistsize"+colorscopy.size()) ;

       // increase the size of an array list.
       System.out.println("==========increase size=================");  
       colorscopy.ensureCapacity(10);
       System.out.println("after increasing  arraylistsize"+colorscopy.size()) ;

       //replace the second element of a ArrayList with the specified element.
       System.out.println("===========Replacing 2nd element================="); 
       color.add(2, "green");
       System.out.println("after adding green color at 2nd index ArrayLists: "+ color);

       //print all the elements of a ArrayList using the position of the elements.
       System.out.println("==========using index================="); 
       System.out.println("printing array elements using index");
       for (int i= 0 ;i<color.size(); i++){
            System.out.println(color.get(i));
        }
    }    
}
