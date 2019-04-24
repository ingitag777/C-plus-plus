//8.1 Write contents into a Text file. Get a word from the user as input, compute the number of occurrences of this word in the file and print the count.
#include <iostream> 
  
/* fstream header file for ifstream, ofstream,  
  fstream classes */
#include <fstream> 
#include<string.h>  
using namespace std; 
  
// Driver Code 
int main() 
{ 
    // Creation of ofstream class object 
    ofstream fout; 
  
    string line; 
  
    // by default ios::out mode, automatically deletes 
    // the content of file. To append the content, open in ios:app 
    // fout.open("sample.txt", ios::app) 
    fout.open("sample.txt"); 
  
    // Execute a loop If file successfully opened 
    while (fout) { 
  
        // Read a Line from standard input 
        getline(cin, line); 
  
        // Press -1 to exit 
        if (line == "-1") 
            break; 
  
        // Write line in file 
        fout << line << endl; 
    } 
  
    // Close the File 
    fout.close(); 
   ifstream fin("sample.txt"); //opening text file
 int count=0;
 char ch[20],c[20];
 
 cout<<"Enter a word to count:";
 gets(c);
 
 while(fin)
 {
  fin>>ch;
  if(strcmp(ch,c)==0)
   count++;
 } 
 
 cout<<"Occurrence="<<count<<"n";
 fin.close(); //closing file
 
 return 0;
}

