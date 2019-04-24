#include<iostream>
using namespace std;

class matrix
{
  int a[3][3];
  
   public:
       void accept();
       void display();
       void operator +(matrix x);
};

void matrix::accept()
{
    cout<<"\nEnter 3x3 Matrix Elements : \n";
   for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          {
                 cout<<"";
                 cin>>a[i][j];

          }
    }
}

void matrix::display()
{
  for(int i=0;i<3;i++)
    {
    
   for(int j=0;j<3;j++)
          {
                 
                 cout<<a[i][j]<<"\t";
          }
           cout<<"\n";
    }
}


void matrix::operator +(matrix x)
{
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           mat[i][j]=a[i][j]+x.a[i][j];
         }
    }

    cout<<"Addition of matrix :\n \n";
   
    for(int i=0;i<3;i++)
     {
       cout<<"";
          for(int j=0;j<3;j++)
                {
                 cout<<mat[i][j]<<"\t";
                }
         cout<<"\n";
      }
     
}
   


int main()
{

   matrix m,n;
    m.accept();
    n.accept();
    cout<<"First matrix : \n";
    m.display();
     cout<<"Second matrix : \n";
    n.display();
    m+n;
     return 0;
}


