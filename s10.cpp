#include<stdio.h>
int main()
{
int i,n;
printf("Checking number divisible by 3 and 5 upto n\n Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%3==0)
printf("\n\n%d is divisible by 3",i);
if(i%5==0)
printf("\n%d is divisible by 5",i);
}
return 0;
}

