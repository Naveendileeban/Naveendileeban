#include<stdio.h>
int main()
{
    int i,start_date;
    char month;
     printf("enter the month number:");
    scanf("%d",&month);
    if(month>12)
    {
        printf("\nenter a valid month number\n");
    }
    else
    {

    printf("start date\n1==>Sun\n2==>Mon\n3==>Tue\n4==>Wed\n5==>Thu\n6==>Fri\n7==>Sat\n");

    printf("enter the start date:");
    scanf("%d",&start_date);

    if(start_date>7)
    {
        printf("\nenter a valid start date\n");
    }
    else
    {
    switch(month)
    {
        case 1:printf("\n 2022\t\t   JANUARY\n");break;
        case 2:printf("\n 2022\t\t   FEBRUARY\n");break;
        case 3:printf("\n 2022\t\t   MARCH\n");break;
        case 4:printf("\n 2022\t\t   APRIL\n");break;
        case 5:printf("\n 2022\t\t   MAY\n");break;
        case 6:printf("\n 2022\t\t   JUNE\n");break;
        case 7:printf("\n 2022\t\t   JULY\n");break;
        case 8:printf("\n 2022\t\t   AUGUST\n");break;
        case 9:printf("\n 2022\t\t   SEPTEMBER\n");break;
        case 10:printf("\n 2022\t\t  OCTOBER\n");break;
        case 11:printf("\n 2022\t\t  NOVEMBER\n");break;
        case 12:printf("\n 2022\t\t  DECEMBER\n");break;

    }

    printf("__________________________________________\n\n");
    printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat\n\n");


   for(i=1;i<start_date;i++)
   {
       printf("       ");
   }

if(month==1||month==3||month==5||month==7||month==9||month==11)
{
   for(i=1;i<=31;i++)
   {

       printf("%2d     ",i);

       if(start_date%7==0)
       {
           printf("\n");
       }
       start_date++;
   }

}
else if(month==4||month==6||month==8||month==10||month==12)
{
   for(i=1;i<=30;i++)
   {

       printf("%2d     ",i);

       if(start_date%7==0)
       {
           printf("\n");
       }
       start_date++;
   }

}
else
{
   for(i=1;i<=29;i++)
   {

       printf("%2d     ",i);

       if(start_date%7==0)
       {
           printf("\n");
       }
       start_date++;
   }

}
    }
    }
    return 0;
}
