import java.time.* ;
import java.time.format.DateTimeFormatter;
public class JDateTime{
    public static void main(String[] args) {
        LocalDate ldate = LocalDate.of(2021, 3, 3) ;
        LocalDateTime ldatetime = LocalDateTime.now();
        LocalTime ltime = LocalTime.of(12, 55, 12);
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy") ;
        DateTimeFormatter dtf1 = DateTimeFormatter.ofPattern("dd/MMM/yyyy hh:mm a") ;
        System.out.println(ldate);
        System.out.println(ldate.format(dtf));
        System.out.println(ldatetime.format(dtf1));
        System.out.println(ltime);
        System.out.println(ldate.plusDays(30));
        System.out.println(LocalDate.parse("2020-11-11"));
    }
 }