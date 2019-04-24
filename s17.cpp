// 5.1 Base class Temperature obtains temperature value in Celsius (c) through its parameterized constructor with default arguments and convert it into Fahrenheit value (f) and prints it using the function calculate(). Class Temp inherits class Temperature to obtain the temperature value in Fahrenheit and converts it into Kelvin value (k) and prints it using the redefined function calculate().

#include<iostream>
using namespace std;

class Temperature
{

public:

float f,c;

Temperature(float t)    //constructor
{ 
cout<<"Enter temperature in Celsius"<<endl;
cin>>c;
calculate();
}

void calculate()
{
f = ((c*9)/5)+32;
cout<<"Temperature in Fahrenheit : "<<f<<endl;
}

};

class Temp: public Temperature
{

public:

float k;
Temp(float a):Temperature(a){}
  
void calculate()
{
k= (((f-32)*5)/9)+273.15;
cout<<"Temperature in Kelvin : "<<k<<endl;
}
};


int main(void)
{
float arg;
cout<<"Pres 1 to begin"<<endl;
cin>>arg;
Temp x(arg);
x.calculate();
return 0;
} 


