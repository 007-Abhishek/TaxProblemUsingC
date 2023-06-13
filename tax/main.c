#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs;
    float income;
    float tax;
    float Net_income;

    printf("Enter the number of hours worked in a week....\n");
    scanf("%d",&hrs);

    if(hrs>40)
    {
        income=480+18*(hrs-40);
    }
    else
        income=hrs*12;

    printf("Income per week is: %.2f$\n",income);


   if(income<=300)
   {
       tax=0.15*income;
   }

    else if(income>300 && income<=450)
       {
           tax=45+ 0.2*(income-300);
       }
          else
            {
               tax=75+0.25*(income-450);
            }

    printf("Tax you have to pay is: %.2f$\n",tax);

    Net_income=income-tax;
    printf("Net income is: %.2f$\n",Net_income);
    return 0;
}
