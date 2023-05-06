/**
 * This program prints out the user's date of birth.
 */

public class Main {
  public static void main(String[] args) {
    String dateOfBirth = "01/01/2000"; // Expected format: DD/MM/YYYY
    String output = String.format("My date of birth is %s", dateOfBirth);
    System.out.println(output);
  }
}
