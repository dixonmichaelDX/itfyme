
import java.util.Scanner;
public class LogicalRelational7{
    public static void main(String [] args){
        Scanner scan=new Scanner(System.in);
        int a=scan.nextInt();
        int b=scan.nextInt();
        int c=scan.nextInt();
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
    