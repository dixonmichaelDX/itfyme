public class PointTest {
    public static void main() {
        Point2D pt2D1 ,pt2D2;
        Point3D pt3D1,pt3D2;
        pt2D1 = new Point2D (3.5f , 4.5f);
        System.out.println(pt2D1);
        pt2D2 = new Point2D();
        pt2D2.setX(6.7f);
        pt2D2.getX();
        pt2D2.setY(9.2f);
        pt2D2.getY();
        System.out.println(pt2D2);

        pt3D1 = new  Point3D(2.1f, 3.4f, 5.6f);
        System.out.println(pt3D1);

        pt3D2 = new Point3D();
        pt3D2.setX(8.1f);
        //pt3D2.getY();
        pt3D2.setY(6.3f);
        System.out.println(pt3D2);


        pt3D2.setXYZ(1.2f, 4.1f, 5.1f);
        System.out.println(pt3D2);
    }
    
}
