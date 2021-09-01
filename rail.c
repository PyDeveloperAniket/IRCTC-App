#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
  int choice;
  char dashboard,upcomingjourney,lasttransaction;
  printf("\n\n\t......WELCOME TO THE INDIAN RAILWAYS.......");
  printf("\n\n\t\aPlease enter 1 to enter in the Dashboard");
  printf("\n\n\t\aPlease enter 2 to enter in the UpComing Journey");
  printf("\n\n\t\aPlease enter 3 to enter in Last Transaction");

  printf("\n\n\tPlease enter your Preference");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
  printf("\n\n\tDashboard");
  int choice;
  int planmyjourney,mybookings,pnrenquiry,refundhistory,cancelticket,dd,mm,yyyy,age;
  printf("\n\n\tPlease enter 1 to select Plan My Journey");
  printf("\n\n\tPlease enter 2 to select My Bookings");
  printf("\n\n\tPlease enter 3 to select PNR Enquiry");
  printf("\n\n\tPlease enter 4 to select Refund History");
  printf("\n\n\tPlease enter 5 to select Cancel Ticket");

  printf("\n\n\tPlease enter your Preference");
  scanf("%d",&choice);
  switch (choice)


  {
  case 1:
      printf("\n\n\tPlease Enter your journey Date");
      scanf("%d%d%d",&dd,&mm,&yyyy);
      printf("\n\n\tyour journey date is :%d\t%d\t%d",dd,mm,yyyy);

      char name[20];
          printf("\n\n\tPlease Enter the name and Age of Passenger");
          scanf("%s%d",&name,&age);
          printf("\n\n\tPassenger name is %s and age is %d",name,age);
          printf("\n\n\tPlease Enter the Place to start the journey");
          scanf("%s",&name);
          printf("\n\n\tYour Start journey place is :%s",name);
          printf("\n\n\tPlease Enter the Destination");
          scanf("%s",&name);
          printf("\n\n\tYour Destination is :%s",name);

          printf("\n\n\tThe Available trains for this route are : ");
          printf("\n\n\tTrain name                                       Arrival time  Departure time        Route");
          printf("\n\n\t22612	Ahemdabad Chennai Suvidha Special            11:20:00      22:17:00        - Tirunelveli Junction to - Chennai Egmore");
          printf("\n\n\t22645	Super Fast Festival Special                  09:45:00      17:25:00        - Indore Junction to	- Trivandrum Kochuveli");
          printf("\n\n\t22920  Ahmedabad-Chennai Central HumSafar Express  21:00:12      06:00:00        - Ahmedabad Junction to - Puratchi Thalaivar Dr.MGR Central");
          printf("\n\n\t26501       VSKP GIMB SPL                          09:00:05      10:00:35        - Wardha Junction to - Anand Junction ");
          printf("\n\n\t26634       HWH ADI SPL                            08:00:00      10:00:32        - Wardha Junction  to - Ahemadabad Junction");

          int trainnumber,PNR,bp;
          printf("\n\n\tPlease enter the train number to select the train");
          scanf("%lu",&trainnumber);
          if (trainnumber==22612)
          {
            printf("\n\n\tYour Train is 22612 Ahemdabad Chennai Suvidha Special");
          
          }
          else if (trainnumber==22645)
              {
              printf("\n\n\tYour train is 22645	Super Fast Festival Special ");
              }
      
          else if (trainnumber==22920)
              {
                printf("\n\n\tYour Train is 22920  Ahmedabad-Chennai Central HumSafar Express");
              }
              else if (trainnumber==26501)
              {
                printf("\n\n\tYour Train is 26501 VSKP GIMB SPL");
              }
              else if(trainnumber==26634)
              printf("\n\n\tYour Train is 26634 HWH ADI SPL");
          
          printf("\n\n\tPlease enter the Berth Preference");
          scanf("%d",&bp);
          if (bp>0 && bp<73)
   if (bp % 8 == 1 || bp % 8 ==4)
   {
     printf("\n\n\tYour berth is lowwer berth and your seat no. is %d",bp);
   }
   else if (bp % 8 ==2 || bp % 8 ==5)
   {
      printf("\n\n\tYour berth is middle berth and your seat no. is %d",bp);
   }
   else if (bp % 8 ==3 || bp % 8 == 6)
   {
      printf("\n\n\tYour berth is upper berth and your seat no. is %d",bp);
   }
   else if (bp % 8 == 7)
   {
      printf("\n\n\tYour berth is side lower berth and your seat no. is %d");
   }
   else
   printf("\n\n\tYour berth is side upper berth and your seat no. is %d",bp);

else 
{
   printf("\n\n\tBerth you entered is invalid...!!!");
}

printf("\n\n\tPassenger Name is %s \n\tPassenger age is %d \n\tYour Journey from %s to %s\n\tYour Train is %lu \n\tYour Berth is %lu \n\tYour Seat has been Confirmed.\n\tThank You...\n\t...INDIAN RAILWAYS...",name,age,name,name,trainnumber,bp);

   break;

  case 2:
      printf("\n\n\tMy Bookings");
      printf("\n\n\tThere are no current Bookings\n\tThank You\tINDIAN RAILWAYS");
      break;

  case 3:
      printf("\n\n\tPNR Enquiry");
      printf("\n\n\tPlease Enter the PNR");
      scanf("%lu",&PNR);
      printf("\n\n\tThe current status for PNR :%lu is Seat Confirmed...Thank You, Wish You a Happy and Safe Journey\n\n\tINDIAN RAILWAYS",PNR);

      break;

  case 4:
      printf("\n\n\tRefund History");
      printf("\n\n\tThere is no record of Refunds\n\tThank You\tINDIAN RAILWAYS");
      break;

  case 5:
      printf("\n\n\tCancel Ticket");
      printf("\n\n\tThere is no Cancelation of Ticket at the Current situation\n\tThank You\tINDIAN RAILWAYS");
      break;
  
  default:
      printf("\n\n\tThank You for Visiting Indian Railways");
      break;
  }
  
  break;

  case 2:
  printf("\n\n\tUpcoming Journey");
  printf("\n\n\tThere are no UpComing Journey\n\tTo Plan Your Journey with the INDIAN RAILWAYS\n\tPlease go to the Dashboard");
  break;

  case 3:
  printf("\n\n\tLast Transaction");
  printf("\n\n\tThere are no records of Last Transaction");
  break;
     
  
  default:
  printf("\n\n\tThank You for visiting Indian Railways");
      break;
  }

}