public class JThreadusingInterface implements Runnable {
    int id;
    public void run()  {
        System.out.println("in interface class");
        //System.out.println(this.getId());
    } 
    public JThreadusingInterface(int id) {
        this.id = id;
    }
    
}
