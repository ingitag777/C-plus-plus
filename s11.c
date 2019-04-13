#include<stdio.h>
int main()
{
 int n,i,j,c;
 printf("Enter how much prime no. you want to generate\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   {c=0;
    for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          c++;
          break;
        }
}
       
      
     if(c==0&&i!=1)
    
printf("Prime no.s are \n%d",i);
   }
 return 0;
}




