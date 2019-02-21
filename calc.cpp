#include<iostream>
using namespace std;
void add();
void sub();
void mult();
void div();
void div()
{
float s,r;
cout<<"Enter two no.s\n";
cout<<"Division : "s/r;
}

	void mult()
{
	int p,q;
	cout<<"Enter two nos.\n"
		cout<<"Multiplication : "<<p*q;
}

void sub()
{
int x,y;
cout<<"Enter two no.s\n"
	cout<<"Substraction : "<<x-y;
}
void add()
{
	int a,b,sum;
	cout<<"Enter two nos\n";
	cout<<"Sum : "<<a+b;

}
int main()
{
	int n;
	cout<<"This is a four function Calculator\n";
	while(1)
	{
	cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\nEnter your choice\n"
		cin>>n;
	switch(n)
	{
	case 1:
add();
break;
	case 2:

sub();
break;
	case 3:

mult();
break;
	case 4:
div();
break;
	case 5:
exit();
	default:
cout<<"Invalid Input Try Again";
	}
       }  
return 0;
}
