public class MyLine {
    MyPoint begin;
    MyPoint end;
    public MyLine(MyPoint begin, MyPoint end) {
        this.begin = begin;
        this.end = end;
    }

    public MyLine(int x1, int y1,int x2,int y2) {
        begin.x = x1;
        begin.y = y1;
        end.x = x2;
        end.y = y2;
    }

    public MyPoint getBegin() {
        return begin;
    }

    public void setBegin(MyPoint begin) {
        this.begin = begin;
    }

    public MyPoint getEnd() {
        return end;
    }

    public void setEnd(MyPoint end) {
        this.end = end;
    }

    public int getBeginX() {
        return begin.getX();
    }

    public int getBeginY() {
        return begin.getY();
    }
    
    public int getEndX() {
        return end.getX();
    }
    public int getEndY() {
        return end.getY();
    }
    public int[] getBeginXY() {
        int [] a = new int[2];
        a[0] = begin.x;
        a[1] = begin.y;
        return a; 
       
    }

    public int[] getEndXY() {
        int [] a = new int[2];
        a[0] = end.x;
        a[1] = end.y;
        return a; 
       
    }

    public void setBeginXY(int x, int y) {
        begin.x = x;
        begin.y= y;
    }

    public void setEndXY(int x, int y) {
        end.x = x;
        end.y= y;
    }
    public double getLength() {
        return begin.distance(end);
    }
    public double getGradient() {
        int xdiff = begin.x - end.x;
        int ydiff = begin.y - end.y;
        return Math.atan2(xdiff , ydiff);
    }

    @Override
    public String toString() {
        return "MyLine [begin=" + begin + ", end=" + end + "]";
    }
}
