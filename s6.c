#include<stdio.h>
int main()
{
int n,m,i,result=0;
printf("Enter two numbers\n");
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
result=result+m;
}
printf("\nThe product of two no.s using for loop:  %d",result);
return 0;
}

