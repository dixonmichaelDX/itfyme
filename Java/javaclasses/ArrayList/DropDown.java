import java.util.ArrayList;

public class DropDown {
    int currentIndex = -1;
    ArrayList <String>  myData = new ArrayList<>();

    public void setIndex (int currentIndex) {
        this.currentIndex =currentIndex;
    }

    public int getIndex() {
      return this.currentIndex;

    }

    public ArrayList<String> getData () {
        return this.myData;
    } 

    public void  setData (ArrayList<String> myData) {
       this.myData = myData;
    } 

    public static void main(String [] args)  {
        ArrayList <String>  list = new ArrayList<>();
        list.add("karanataka");
        list.add("andra");
        list.add("tamil");
        list.add("kerala");
        DropDown d = new DropDown () ;
        System.out.println(d.getIndex());
        d.setData(list);
        System.out.println(d.getData());
        d.setIndex(2);
        System.out.println(d.getIndex());
    }
    
}
