public class Point3D extends Point2D { 
    float z;

    public Point3D(float x, float y, float z) {
        super(x, y);
        this.z = z;
    }

    public Point3D(float z) {
        this.z = z;
    }
    public Point3D() {

    }
    public void setXYZ(float x,float y,float z){
        this.z = z;
        setXY(x, y);
    }
    public float [] getXYZ(){
        float []a =  new float[3];
        a[0] = getX();
        a[1] = getY();
        a[2] = this.z;
        return a;
    }

    @Override
    public String toString() {
        return "Point3D [z=" + z + "]";
    }

    
}
