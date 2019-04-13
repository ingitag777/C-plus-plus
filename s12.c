#include<stdio.h>
int main()
{
int x=0,y=1,i,n,z;
printf("Enter limit for Fibonacci series\n");
scanf("%d",&n);
printf("Fibnacci Series\n");
for(i=1;i<=n;i++)
{
printf("%d,",x);
z=x+y;
x=y;
y=z;
}
return 0;
}


