
import java.lang.Math;
public class DateTime2 {  
    int day;
    int month;
    int year;
    DateTime2 d ;
    final int[] daysInMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
    final String [] daysName = {"friday", "saturday", "sunday","monday","tuesday","wednesday","thursday"};

    public DateTime2(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public int getDay() {
        return day;
    }

    public void setDay(int day) {
        this.day = day;
    }
    
    public int getMonth() {
        return month;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getYear() {
        return year;
    }
    public void setYear(int year) {
        this.year = year;
    }

    @Override
    public String toString() {
        return "DateTime2 [day=" + day + ", month=" + month + ", year=" + year + "]";
    }
 
    public DateTime2 add(int num) {
        int newDay = day + num;
        int newMonth = month;
        while (newDay > daysInMonth[newMonth-1]){
            newDay = newDay - daysInMonth[newMonth-1] ;
            newMonth++;
        }
        return new DateTime2 (newDay,newMonth,year);
    }

    public int  getDiff (DateTime2 d2) {
        int diff = 0;
        if (this.month == d2.month && this.day == d2.day) {
            return diff;
        }
        else if (this.month == d2.month) {
            diff = Math.abs (this.day - d2.day );
            return  diff;
        } else {
            int smallMonth = this.month < d2.month ? this.month : d2.month;
            int smallDay = this.month < d2.month ?  this.day  : d2.day;
            int largeMonth = this.month > d2.month ? this.month : d2.month;
            int largeDay  = this.month > d2.month ?  this.day  : d2.day;
            for (int i = smallMonth ; i<largeMonth ;i++ ) {
                if (i == smallMonth) { 
                    diff = daysInMonth[i-1] - smallDay;
                    
                } else {
                    diff = diff + daysInMonth[i-1];
                }   
            } 
            return diff+largeDay;
        }
    }

    public String getDayName (DateTime2 d) { 
        int diff = this.getDiff(d);
        System.out.println(diff);
        int dayNum = diff % 7 ;
        return daysName[dayNum];
    }
    public DateTime2 minus(int num) {
        int newDay = day - num;
        int newMonth = month-1;
        while ( newDay <= 0) {
            newDay = newDay + daysInMonth[newMonth-1];
            if (newDay < 0 ) {
               newMonth--;
            }
        } 
        return new DateTime2  (newDay ,newMonth,year);
    }



}





    /*public int LeapYear(int year) {
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)) {
            return 1;
        } else {
            return 0;
        }
    }


    public String getMonthName( int month) {
        String[] MonthNamesArray  = new String[12] ; //{"January","february", "march","april", "may", "june", "july","augustr", "september", "october","november", "december" };
        MonthNamesArray[12] = {"January","february", "march","april", "may", "june", "july","augustr", "september", "october","november", "december" };
        return MonthNamesArray[month];



    }

    public  int minusDay(int day ,int month,int year)  {

    }
    public DateTime2 minus(int num) {
        int newDay = day - num;
        int newMonth = month-1;
        while ( newDay <= 0) {
            newDay = newDay + daysInMonth[newMonth-1];
            newMonth--;
        } 
        return new DateTime2  (newDay ,newMonth+1,year);
    }*/



