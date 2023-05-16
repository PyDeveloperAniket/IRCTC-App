import java.util.Scanner;

public class IndianRailways {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;
        System.out.println("\n\n\t......WELCOME TO THE INDIAN RAILWAYS.......");
        System.out.println("\n\n\t\aPlease enter 1 to enter in the Dashboard");
        System.out.println("\n\n\t\aPlease enter 2 to enter in the UpComing Journey");
        System.out.println("\n\n\t\aPlease enter 3 to enter in Last Transaction");
        System.out.println("\n\n\tPlease enter your Preference");
        choice = sc.nextInt();
        switch (choice) {
            case 1:
                System.out.println("\n\n\tDashboard");
                int dashboardChoice;
                int planmyjourney, mybookings, pnrenquiry, refundhistory, cancelticket, dd, mm, yyyy, age;
                System.out.println("\n\n\tPlease enter 1 to select Plan My Journey");
                System.out.println("\n\n\tPlease enter 2 to select My Bookings");
                System.out.println("\n\n\tPlease enter 3 to select PNR Enquiry");
                System.out.println("\n\n\tPlease enter 4 to select Refund History");
                System.out.println("\n\n\tPlease enter 5 to select Cancel Ticket");
                System.out.println("\n\n\tPlease enter your Preference");
                dashboardChoice = sc.nextInt();
                switch (dashboardChoice) {
                    case 1:
                        System.out.println("\n\n\tPlease Enter your journey Date");
                        dd = sc.nextInt();
                        mm = sc.nextInt();
                        yyyy = sc.nextInt();
                        System.out.printf("\n\n\tyour journey date is :%d\t%d\t%d", dd, mm, yyyy);
                        String name_1;
                        System.out.println("\n\n\tPlease Enter the name and Age of Passenger");
                        name_1 = sc.next();
                        age = sc.nextInt();
                        System.out.printf("\n\n\tPassenger name is %s and age is %d", name_1, age);
                        String name_2;
                        System.out.println("\n\n\tPlease Enter the Place to start the journey");
                        name_2 = sc.next();
                        System.out.printf("\n\n\tYour Start journey place is :%s", name_2);
                        String name_3;
                        System.out.println("\n\n\tPlease Enter the Destination");
                        name_3 = sc.next();
                        System.out.printf("\n\n\tYour Destination is :%s", name_3);
                        System.out.println("\n\n\tThe Available trains for this route are : ");
                        System.out.println("\n\n\tTrain name                                       Arrival time  Departure time        Route");
                        System.out.println("\n\n\t22612\tAhemdabad Chennai Suvidha Special            11:20:00      22:17:00        - Tirunelveli Junction to - Chennai Egmore");
                        System.out.println("\n\n\t22645\tSuper Fast Festival Special                  09:45:00      17:25:00        - Indore Junction to	- Trivandrum Kochuveli");
                        System.out.println("\n\n\t22920\tAhmedabad-Chennai Central HumSafar Express  21:00:12      06:00:00        - Ahmedabad Junction to - Puratchi Thalaivar Dr.MGR Central");
                        System.out.println("\n\n\t26501\tVSKP GIMB SPL                                09:00:05      10:00:35        - Wardha Junction to -
