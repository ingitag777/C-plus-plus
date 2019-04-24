//6.1 Base class Temperature obtains temperature value in Kelvin (k) through its parameterized constructor, convert it into Celsius value (c) and prints it using the virtual function calculate(). Class Temp inherits class Temperature to obtain the temperature value in Celsius (c), converts it into Fahrenheit value (f) and prints it using the overridden function calculate().

#include<iostream>
using namespace std;


class Temperature
{

public:

float c,k;

Temperature(int t)    //constructor
{ 
cout<<"Enter temperature in Kelvin"<<endl;
cin>>k;
}

virtual void calculate()
{
  cout<<k<<endl;
c=k-273.15;
cout<<"Temperature in Celsius : "<<c<<endl;
}

};

class Temp: public Temperature
{

public:

float k;
Temp(int a):Temperature(a){}  
void calculate()
{
float f;
f= ((c*9)/5)+32;
cout<<"Temperature in fahrenheit : "<<f<<endl;
}
};

int main()
{
int arg;
cout<<"Pres 1 to begin"<<endl;
cin>>arg;
Temperature *ptr;
 Temp x(arg);
 ptr->calculate();
ptr=&x;
ptr->calculate();
 
return 0;
} 

