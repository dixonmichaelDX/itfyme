public class Circle {
    int radius;
    String color;
    static float pi=3.14f;
    float area;
    float perimeter;
    int diameter;
    

    public static void main( String args[]) {
        Circle c1 = new Circle();
        c1.setRadius(10);
        c1.getRadius();
        c1.area();
        c1.perimeter();
        c1.diameter();
        System.out.println("==============");
        Circle c2 = new Circle("blue");
        c2.setRadius(20);
        c2.getRadius();
        c2.area();
        c2.perimeter();
        c2.diameter();   
    }

    Circle(String c) {
        color = c;
        System.out.println("circle color is "+color);
    }
    Circle(){
        color = "pink";
        System.out.println("circle color is "+color);


    }

    void setRadius (int r) {
        radius = r;

    }

    void getRadius () {
        System.out.println("radius ="+radius);
        
    }

    void area () {
        area = Circle.pi * radius * radius;
        System.out.println("area of a circle ="+area);

        
    }

    void perimeter () {
        area = 2 * Circle.pi * radius;
        System.out.println("perimeter of a circle ="+area);

        
    }

    void diameter () {
        diameter = 2 * radius;
        System.out.println("diameter of the circle ="+diameter);    
    }
}