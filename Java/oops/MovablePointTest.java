public class MovablePointTest {

    public static void main(String []args){
        Point p1,p2;
        MovablePoint mp1,mp2;
    
        p1 = new Point (2.3f,4.3f);
        p2= new Point();
        p2.setXY(1.2f, 2.5f);
        mp1 = new MovablePoint (2.3f, 3.4f, 5.6f, 5.7f);
        mp1.setSpeed(2.5f,5.6f);
    
        mp2 = new  MovablePoint(4.1f, 5.6f,5.7f,6.8f);
    
        System.out.println(mp2.move());
        System.out.println(mp2);

    }
   



    
}
