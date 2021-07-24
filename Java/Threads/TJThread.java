public class TJThread {
    public static void main(String args[]) {
        JThread t1 = new JThread();
        t1.start();
        JThread t2 = new JThread();
        t2.start();
        Thread t3 = new Thread(new JThreadusingInterface(2)) ;
        t3.start();
        Thread t4 = new Thread(new JThreadusingInterface(10)) ;
        t4.start();

        T1 t11 = new T1();
        T2 t12 = new T2();
        T3 t13 = new T3();
        t11.setPriority(Thread.MAX_PRIORITY);
        t12.setPriority(Thread.MIN_PRIORITY);
        t13.setPriority(t12.getPriority()+1);
        t11.start();
        t12.start();
        t13.start();

      

    }
    
}
