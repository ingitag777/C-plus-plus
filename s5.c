#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float d,r1,r2;
printf("Enter quadratic equation");
scanf("%fx^2+%fx+%f",&a,&b,&c);
d=b*b-(4*a*c);
if(d<0)
{
printf("Roots are complex numbers\n");
return 0;
}
r1=(-b+ sqrtf(d))/(2*a);
r2=(-b- sqrtf(d))/(2*a);
printf("Roots of quadratic equation are:\n%f\n%f",r1,r2);
return 0;
}

