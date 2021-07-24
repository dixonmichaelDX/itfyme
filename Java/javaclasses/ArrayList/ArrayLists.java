import java.util.ArrayList;
import java.util.Iterator;
public class ArrayLists {
    public static void main(String [] args)  {
        ArrayList <Integer>  numList = new ArrayList<>();
        numList.add(1);
        numList.add(5);
        numList.add(6);
        numList.add(3); 
        
        System.out.println("====for loop====");
        for  (int i =0; i<numList.size();i++) {
            System.out.println(numList.get(i));
        }
        System.out.println(numList.size());
        System.out.println(numList.add(7));
        System.out.println(numList.indexOf(1));
        System.out.println(numList.contains(6));

        
        System.out.println("====iterator====");
        Iterator<Integer> num = numList.iterator();
        while (num.hasNext())  {
            System.out.println(num.next());
        }
        
        System.out.println("====foreach====");
        numList.forEach((nums)->{
            System.out.println(nums);

        });

        System.out.println("===========");
        for (Integer number : numList) {
            System.out.println(number);
        }


        ArrayList <String>  nameList = new ArrayList<>();
        nameList.add("pooja");
        nameList.add("Rajashree");
        nameList.add("shreya");
        nameList.add("vaishnavi");
        System.out.println("=====for loop======");
        for  (int i =0; i<nameList.size();i++) {
            System.out.println(nameList.get(i));
        }


        System.out.println(nameList.size());
        System.out.println(nameList.add("akshatha"));
        System.out.println(nameList.indexOf("akshatha"));
        System.out.println(nameList.contains("rajashree"));

        System.out.println("====iterator====");
        Iterator<String> name = nameList.iterator();
        while (name.hasNext())  {
            System.out.println(name.next());
        }
        System.out.println("====foreach====");
        nameList.forEach((names)->{
            System.out.println(names);

        });

        System.out.println("===========");
        for (String namess : nameList) {
            System.out.println(namess);
        }







    }
      
}




/*System.out.println("By for (String car: carList)");
for (String car : carList) { // iterator
	System.out.println(car);
}
System.out.println("By indexing - classic array index");
for (int i = 0; i < carList.size(); i++) { // iterator
	System.out.println(carList.get(i));
}
System.out.println("By Iterator");
Iterator<String> it = carList.iterator();
while (it.hasNext()){
	System.out.println(it.next());
}
System.out.println("By forEach");
carList.forEach( (element) -> {
	System.out.println( element );
});*/
