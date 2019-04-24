/*5.2 Define a class with following member functions 
a. constructor to obtain side1, side2. 
b. void choice() to have menu driven control to find and print the area of square, rectangle, or triangle
c. int calculate(int) to compute the Area of Square
d. int calculate(int, int) to compute the Area of Rectangle
e. float calculate(int, int) to compute the Area of Triangle*/

#include<iostream>
using namespace std;

class shapes
{

 public:
  int s1,s2;
  float s3,s4;
   shapes()  // constructor
    {
     cout<<"Enter side 1\n"<<endl;
     cin>>s1;
     cout<<"Enter side 2\n"<<endl;
     cin>>s2;
      cout<<"Enter side 3\n"<<endl;
     cin>>s3;
      cout<<"Enter side 4\n"<<endl;
     cin>>s4;
    }

   void choice()
   {
    int n;
   cout<<"Menu to calculate:\n1. Area of square\n2. Area of rectangle\n3. Area of triangle\n 4.Exit\n";
   do
  {
    cout<<"Enter your choice\n";
    cin>>n;
    
    switch(n)
    {
     case 1:
      calculate(s1);
       break;
     case 2:
      calculate(s1,s2);
       break;
     case 3:
      calculate(s3,s4);
      break;    
     case 4:
      break;
     default :
     cout<<"Wrong choice\n";
     break;
    }
   }
    while(n!=4);
}
  int calculate(int s1)
  {
  cout<<"Area of square\n"<<s1*s1<<endl;

   }
  
   int calculate(int s1,int s2)
   {
  cout<<"Area of rectangle\n"<<s1*s2<<endl;
    }

   float calculate(float s3,float s4)
   {
    cout<<"Area of triangle\n"<<(s3*s4)/2<<endl;
 }

};

int main(void)
{
shapes a;
a.choice();

return 0;
}

