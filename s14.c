#include<stdio.h>
int main()
{
int n;
float i,sum=0.0,a;
printf("Enter value of n for the sreies\n1+1/2+1/3+......+1/n\n");
scanf("%d",&n);
for(i=1.0;i<=n;i++)
{
a=1/i;
sum=sum+a;
}
printf("\n Tha sum of the given series is %f\n",sum);
return 0;
}

