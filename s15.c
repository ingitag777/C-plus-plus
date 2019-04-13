#include<stdio.h>

long factorial(int);//function declaration 
main()
{
   int num;
   long f;//if answer comes more than integer limit
 
   printf("ENTER A NUMBER TO FIND FACTORIAL :");
   scanf("%d",&num); 
 
   if(num<0)
      printf("NEGATIVE NUMBERS ARE NOT ALLOWED");
   else
   {
      f = factorial(num);//function call
      printf("%d!=%ld",num,f);
   }
   return(0);
}
 
long factorial(int n)//function definition
{
   if(n==1)
      return(1);
   else
   return(n*factorial(n-1));//here we meet the recursion
}

