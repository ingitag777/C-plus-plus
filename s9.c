#include<stdio.h>
int main()
{
int k,n,r,s=0;
printf("Enter the no.\n");
scanf("%d",&n);

k=n;
while(n>0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
if(s==k)
{
printf("\n%d is a palindrome no. ",k);
}
else
{
printf("\n%d is not a palindrome no. ",k);
}
return 0;
}

