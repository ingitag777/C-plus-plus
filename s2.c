#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter two numbers for swaping\n");
scanf("%d%d",&a,&b);
printf("\nBefore swap a=%d and b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nResult:\na=%d   b=%d",a,b);
return 0;
}


