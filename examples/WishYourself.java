import java.time.LocalDate;
import java.time.Month;

public class WishYourself {
   public static void main(String args[]) {

    // declare variables for birthday
    int birthDate = 25;
    Month birthMonth = Month.MARCH;

    // get current date
    LocalDate currentDate = LocalDate.now();
    System.out.println("Todays Date: " + currentDate);

    // get current date and month
    int date = currentDate.getDayOfMonth();
    Month month = currentDate.getMonth();

    if(date == birthDate && month == birthMonth) {
      System.out.println("HAPPY BIRTHDAY TO ME !!");
    }
    else {
      System.out.println("Today is not my birthday.");
    }
   }
}