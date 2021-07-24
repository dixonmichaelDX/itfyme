public class TstInterface  {
    static class crcl implements Drawable {
        public void draw() {
            System.out.println("implementation of draw crcl!");
        }
    }
    static class rect implements Drawable {
        public void draw() {
            System.out.println("implementation of draw rect!");
        }
    }
    static class triangle implements Drawable1 {
        public void moreFunction() {
            System.out.println("implements of drawable1 triangle");

        }

        public void draw() {
            System.out.println("implementation of draw tr!");
        }
    }
    
    public static void main(String args[]){
        crcl tst = new crcl();
        rect tst1 = new rect();
        triangle tst2 = new triangle();
        tst2.moreFunction();
        tst.draw();
        tst1.draw();
    }
}