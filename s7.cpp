#include<stdio.h>
int main()
{
int i,j;
printf("Enter any two numbers\n");
scanf("%d%d",&i,&j);
while(j--)
{
i++;
}
printf("\nSum of two numbers using while loop:%d\n",i);
return 0;
}

