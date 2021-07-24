public class TestDate {
    public static void main(String [] args) {
        DateTime2 d1 = new DateTime2(10,9,2021);
        DateTime2 d2 = new DateTime2(23,5,2021);
        DateTime2 d3 = new DateTime2(1,1,2021);
        System.out.println(d1.add(25));
        System.out.println(d1.minus(25));
        System.out.println(d1.getDiff(d2));
        System.out.println(d3.getDayName(d1));
        System.out.println(d3.getDayName(d2));
        
    }
    
}
