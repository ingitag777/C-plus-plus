#include<stdio.h>
int main()
{
int n,sum,k,i,r,count;
printf("Enter n for amstrong no :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
k=i;
while(k!=0)
{
r=k%10;
sum=sum+(r*r*r);
k=k/10;
}
if(i==sum)
{
count++;
printf("%d\t",sum);
}
}
return 0;
}


