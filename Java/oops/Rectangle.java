public class Rectangle { 
    float length;
    float width;
    
    public Rectangle(float length, float width) {
        this.length = length;
        this.width = width;
        
    }

    public Rectangle() {
        this.length = 1.0f;
        this.width =  1.0f;
    }


    public void setLength(float length) {
        this.length = length;
    }

    public float getLength() {
        return this.length;
    }

    public void setWidth(float width) {
        this.width = width;
    }

    public float getWidth() {
        return this.width;
    } 

    public double getArea() {
        return this.length * this.width;
    }

    public double getPerimeter() {
        return 2*(this.length + this.width);
    }
    public String toString() {
        return "Rectangle [length=" + length + ", width=" + width + "]";
    }
}



