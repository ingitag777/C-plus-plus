#include<stdio.h>
int main()
{
float amt,rate,time,sp;
printf("Enter the amount\n");
scanf("%f",&amt);
printf("\nEnter the rate\n");
scanf("%f",&rate);
printf("\nEnter the time period \n");
scanf("%f",&time);
sp=(amt*rate*time)/100;
printf("\nSimple Interest is : %f",sp);
return 0;
}

