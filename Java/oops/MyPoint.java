public class MyPoint { 
    int x;
    int y;
    public MyPoint() {
        this.x = 0;
        this.y= 0;
    }
    public int getX() {
        return x;
    }
    public void setX(int x) {
        this.x = x;
    }
    public int getY() {
        return y;
    }
    public void setY(int y) {
        this.y = y;
    }
    public MyPoint(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public  int[] getXY() {
        int [] a = new int[2];
        a[0] = x;
        a[1] = y;
        return a; 

    }
    public  void setXY(int x, int y) {
        this.x = x;
        this.y = y; 

    }

    public double distance(int x, int y) {
        return findDistance(this.x, this.y, x, y);
     

    } 

    public double distance (MyPoint another) {
        return findDistance(this.x, this.y, another.x, another.y);
    }

    private double findDistance(int x1, int y1, int x2, int y2) {
        int xDiff = x1 - x2;
        int yDiff = y1 - y2;
        return Math.sqrt(xDiff*xDiff + yDiff*yDiff);


    }

    public double distance() {
        return findDistance(this.x, this.y, 0, 0);

    }
    @Override
    public String toString() {
        return "MyPoint [x=" + x + ", y=" + y + "]";
    }

    
}
