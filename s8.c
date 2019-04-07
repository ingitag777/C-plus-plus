#include<stdio.h>
int main()
{
int n,a,r,s=0;
printf("Enter the no.\n");
scanf("%d",&n);
a=n;
do
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
while(n>0);
printf("\n The reverse number of %d is %d\n",a,s);
return 0;
}


