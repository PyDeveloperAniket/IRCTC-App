import java.util.Scanner;

public class IndianRailways {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("\n\n\t......WELCOME TO THE INDIAN RAILWAYS.......");
    System.out.println("\n\n\tPlease enter 1 to enter the Dashboard");
    System.out.println("\n\n\tPlease enter 2 to enter the Upcoming Journey");
    System.out.println("\n\n\tPlease enter 3 to enter the Last Transaction");

    System.out.println("\n\n\tPlease enter your Preference");
    int choice = scanner.nextInt();

    switch (choice) {
    case 1:
      System.out.println("\n\n\tDashboard");
      System.out.println("\n\n\tPlease enter 1 to select Plan My Journey");
      System.out.println("\n\n\tPlease enter 2 to select My Bookings");
      System.out.println("\n\n\tPlease enter 3 to select PNR Enquiry");
      System.out.println("\n\n\tPlease enter 4 to select Refund History");
      System.out.println("\n\n\tPlease enter 5 to select Cancel Ticket");

      System.out.println("\n\n\tPlease enter your Preference");
      choice = scanner.nextInt();

      switch (choice) {
      case 1:
        System.out.println("\n\n\tPlease Enter your journey Date (dd mm yyyy):");
        int dd = scanner.nextInt();
        int mm = scanner.nextInt();
        int yyyy = scanner.nextInt();
        System.out.printf("\n\n\tYour journey date is: %d\t%d\t%d", dd, mm, yyyy);

        System.out.println("\n\n\tPlease Enter the name and Age of Passenger:");
        String name_1 = scanner.next();
        int age = scanner.nextInt();
        System.out.printf("\n\n\tPassenger name is %s and age is %d", name_1, age);

        System.out.println("\n\n\tPlease Enter the Place to start the journey:");
        String name_2 = scanner.next();
        System.out.printf("\n\n\tYour Start journey place is: %s", name_2);

        System.out.println("\n\n\tPlease Enter the Destination:");
        String name_3 = scanner.next();
        System.out.printf("\n\n\tYour Destination is: %s", name_3);

        System.out.println("\n\n\tThe Available trains for this route are:");
        System.out.println("\n\n\tTrain name\t\t\tArrival time\tDeparture time\t\tRoute");
        System.out.println("\n\n\t22612\tAhemdabad Chennai Suvidha Special\t11:20:00\t22:17:00\t- Tirunelveli Junction to - Chennai Egmore");
        System.out.println("\n\n\t22645\tSuper Fast Festival Special\t\t09:45:00\t17:25:00\t- Indore Junction to - Trivandrum Kochuveli");
        System.out.println("\n\n\t22920\tAhmedabad-Chennai Central HumSafar Express\t21:00:12\t06:00:00\t- Ahmedabad Junction to - Puratchi Thalaivar Dr.MGR Central");
        System.out.println("\n\n\t26501\tVSKP GIMB SPL\t\t\t\t09:00:05\t10:00:35\t- Wardha Junction to - Anand Junction");
        System.out.println("\n\n\t26634\tHWH ADI SPL\t\t\t\t08:00:00\t10:00:32\t- Wardha Junction to - Ahemadabad Junction");

        System.out.println("\n\n\tPlease Enter the train name:");
        String train_name = scanner.next();
        System.out.printf("\n\n\tYour Selected train is: %s", train_name);

        System.out.println("\n\n\tPlease Enter the Number of Seats you want to Book:");
        int no_of_seats = scanner.nextInt();
        System.out.printf("\n\n\tYou have selected %d seats", no_of_seats);

        System.out.println("\n\n\tPlease Enter the class you want to travel:");
        System.out.println("\n\n\t1. First AC\n\t2. Second AC\n\t3. Third AC\n\t4. Sleeper\n\t5. Chair Car\n\t6. Executive Class");
        int class_choice = scanner.nextInt();

        switch (class_choice) {
        case 1:
          System.out.println("\n\n\tYou have selected First AC");
          break;
        case 2:
          System.out.println("\n\n\tYou have selected Second AC");
          break;
        case 3:
          System.out.println("\n\n\tYou have selected Third AC");
          break;
        case 4:
          System.out.println("\n\n\tYou have selected Sleeper");
          break;
        case 5:
          System.out.println("\n\n\tYou have selected Chair Car");
          break;
        case 6:
          System.out.println("\n\n\tYou have selected Executive Class");
          break;
        default:
          System.out.println("\n\n\tInvalid Class Choice");
          break;
        }
        break;

      case 2:
        System.out.println("\n\n\tMy Bookings");
        System.out.println("\n\n\tPlease Enter your Booking ID:");
        String booking_id = scanner.next();
        System.out.printf("\n\n\tYour Booking ID is: %s", booking_id);
        break;

      case 3:
        System.out.println("\n\n\tPNR Enquiry");
        System.out.println("\n\n\tPlease Enter your PNR Number:");
        String pnr_number = scanner.next();
        System.out.printf("\n\n\tYour PNR Number is: %s", pnr_number);
        break;

      case 4:
        System.out.println("\n\n\tRefund History");
        System.out.println("\n\n\tPlease Enter your Transaction ID:");
        String transaction_id = scanner.next();
        System.out.printf("\n\n\tYour Transaction ID is: %s", transaction_id);
        break;

      case 5:
        System.out.println("\n\n\tCancel Ticket");
        System.out.println("\n\n\tPlease Enter your PNR Number:");
        pnr_number = scanner.next();
        System.out.printf("\n\n\tYour PNR Number is: %s", pnr_number);
        break;

      default:
        System.out.println("\n\n\tInvalid Choice");
        break;
      }
      break;

    case 2:
      System.out.println("\n\n\tUpcoming Journey");
      System.out.println("\n\n\tPlease Enter your PNR Number:");
      String pnr_number = scanner.next();
      System.out.printf("\n\n\tYour PNR Number is: %s", pnr_number);
      break;

    case 3:
      System.out.println("\n\n\tLast Transaction");
      System.out.println("\n\n\tPlease Enter your Transaction ID:");
      String transaction_id = scanner.next();
      System.out.printf("\n\n\tYour Transaction ID is: %s", transaction_id);
      break;

    default:
      System.out.println("\n\n\tInvalid Choice");
      break;
    }
  }
