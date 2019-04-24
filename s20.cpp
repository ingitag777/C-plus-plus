/*6.2 Abstract Base class Temperature obtains temperature value in Celsius (c) through its constructor and has a pure virtual function calculate(). Class Fahrenheit inherits class Temperature to obtain the temperature value in Celsius (c), converts it into Fahrenheit value (f) and prints it using calculate(). Class Kelvin inherits class Temperature to obtain the temperature value in Celsius (c), converts it into Kelvin value (k) and prints it using calculate().*/

#include<iostream>
using namespace std;

class Temperature
{
 public:
   float c;
  
    
 
 Temperature()   //constructor
  {
     
     cout<<"Enter the temperature in celsius\n";
     cin>>c;    
  }
   virtual void calculate()=0;

};

class Fahrenheit:public Temperature
{
 public:
  float f;
  void calculate()
  {
    
    f=((c*9)/5)+32;
    cout<<"\nTemperature in Fahrenheit :"<<f;
  }

};

class Kelvin:public Temperature
{
  public:
   float k;
  void calculate()
  {
   k=c-273.15;
   cout<<"\nTemperature in Kelvin :"<<k;
  }
};


int main()
{
   
 Temperature *a;
 Fahrenheit x;
 Kelvin y;
 a=&x;
  a->calculate();
 a=&y;
 a->calculate();

return 0;
}


































































