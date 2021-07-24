
import java.util.Scanner;
public class LogicalRelationalChar8{
    public static void main(String [] args){
        Scanner scan=new Scanner(System.in);
        char a=scan.next().charAt(0);
        char b=scan.next().charAt(0);
        char c=scan.next().charAt(0);


        System.out.println(a>b && a>c); 
        System.out.println(a>b || a>c);
       
        System.out.println(a>b && b>c); 
        System.out.println(a>b || b>c); 
        
        System.out.println(a<b && a<c);
        System.out.println(a<b || a<c);  
       
        System.out.println(a<b && b<c); 
        System.out.println(a<b || b<c);
        
        System.out.println(a==b && a<c); 
        System.out.println(a==b && a<c); 

        System.out.println(a==b && b>c); 
        System.out.println(a==b |b>c); 

        System.out.println(a==b && b==c); 
        System.out.println(a!=b || b==c); 

        System.out.println(a!=b && b==c); 



        

        
    }
}
    