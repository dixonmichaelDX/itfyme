public class TestShapeRectSqu {
    public static void main (){
        Rectangle1 r1,r2;
        Circle2 c1,c2;
        r1 = new Rectangle1(4.5f, 7.5f);
        r2 = new Rectangle1("red", true, 4.5f, 6f);
        r1.setColor("blue");
        r2.setFilled(true);
        c2 = new Circle2(5.6);
        c1 = new Circle2("pink", false, 3.4);
        System.out.println(c1);
        System.out.println(c2);
        System.out.println(c1.isFilled());
        System.out.println(c2.isFilled());
        System.out.println(c1.getPerimeter());
        System.out.println(c2.getPerimeter());
        System.out.println(c1.getArea());
        System.out.println(c2.getArea());




    }
    
}
