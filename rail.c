#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
  int choice;
  char dashboard,upcomingjourney,lasttransaction;
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
  int planmyjourney,mybookings,pnrenquiry,refundhistory,cancelticket,dd,mm,yyyy,s,d,trainnumber;
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
          printf("\n\n\tPlease Enter the Place to start the journey");
          scanf("%s",&name);
          printf("\n\n\tYour Start journey place is :%s",name);
          printf("\n\n\tPlease Enter the Destination");
          scanf("%s",&name);
          printf("\n\n\tYour Destination is :%s",name);

          printf("\n\n\tThe Available trains for this route are : ");
          printf("\n\n\tTrain name                                       Arrival time  Departure time        Route");
          printf("\n\n\t22612	Ahemdabad Chennai Suvidha Special          11:20:00      22:17:00        - Tirunelveli Junction to - Chennai Egmore");
          printf("\n\n\t22645	Super Fast Festival Special                09:45:00      17:25:00        - Indore Junction to	- Trivandrum Kochuveli");
          printf("\n\n\t22920  Ahmedabad-Chennai Central HumSafar Express  21:00:12      06:00:00        - Ahmedabad Junction to - Puratchi Thalaivar Dr.MGR Central");
          printf("\n\n\t06501       VSKP GIMB SPL                          09:00:05      10:00:35        - Wardha Junction to - Anand Junction ");
          printf("\n\n\t06634       HWH ADI SPL                            08:00:00      10:00:32        - Wardha Junction  to - Ahemadabad Junction");

          printf("\n\n\tPlease enter the train number to select the train");
          scanf("%d",trainnumber);
          if (trainnumber=22612)
          {
            printf("Your Train is 82612 Ahemdabad Chennai Suvidha Special");
          }
          else
          {
              if (trainnumber=22645)
              {
              printf("Your train is 22645	Super Fast Festival Special ");
              }
              else
              if (trainnumber=22920)
              {
                printf("Your Train is 22920  Ahmedabad-Chennai Central HumSafar Express");
              }
              else
              if (trainnumber=06501)
              {
                printf("Your Train is 06501 VSKP GIMB SPL");
              }
              else
              if(trainnumber=06634)
              printf("Your Train is 06634 HWH ADI SPL");
              
          }





      break;

  case 2:
      printf("\n\n\tMy Bookings");
      break;

  case 3:
      printf("\n\n\tPNR Enquiry");
      break;

  case 4:
      printf("\n\n\tRefund History");
      break;

  case 5:
      printf("\n\n\tCancel Ticket");
      break;
  
  default:
      printf("\n\n\tThank You for visiting Indian Railways");
      break;
  }
  
  break;

  case 2:
  printf("\n\n\tUpcoming Journey");
  break;

  case 3:
  printf("\n\n\tLast Transaction");
  break;
     
  
  default:
  printf("\n\n\tThank You for visiting Indian Railways");
      break;
  }







}