#include<stdio.h>
int main()
{
int days,y,m,d;
printf("Input no. of days\n");
scanf("%d",&days);
y=days/365;
days=days-(365*y);
m=days/30;
d=days-(m*30);
printf("\n%d Years\n%dMonths\n%ddays",y,m,d);
return 0;
}

