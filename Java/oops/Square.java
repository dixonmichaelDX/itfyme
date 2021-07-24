public class Square extends Rectangle1 {

    public Square(float length, float width) {
        super(length, width);
    }

    public Square() {
    }


    public double getSide() {
        return getLength();
    }
    public void setSide(double side) {
        setLength(side);
    }


    public double getWidth() {
        return getWidth();
    }
    public void setWidth(double side) {
        setWidth(side);
    }

    @Override
    public String toString() {
        return "Square []";
    } 


    
    
}
