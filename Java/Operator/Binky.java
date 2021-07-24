class IntObj {
    public int value;
}

public class Binky {
    public static void main(String[] args) {
        IntObj  x;  
        IntObj  y;  

        x = new IntObj();   

        x.value = 42; 
        System.out.System.out.println(x);
        System.out.System.out.println(y);
        System.out.System.out.println(y.value);

        y.value = 13;  

        y = x;  

        y.value = 13; 
        System.out.System.out.println(y);
        System.out.System.out.println(y.value);
        System.out.System.out.println(x.value);
    }
}