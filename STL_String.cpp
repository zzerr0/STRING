#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{ 
  //instantiating way1
   char *name = new char();
   cin>>name; 
   
  //copies the name into copyname of string type
   string copyname(name);
   cout<<"\n"<<copyname<<endl;
  
  //instantiating way 2 
   char *Name = "Shivam Kumar Yadav ";
   cout<<Name<<endl;
   
  //instantiating way 3
   string str ("I am Zer0");
   cout<<str<<endl;
   
  //instantiating way 4
   string str1="I am Xzer0";
   cout<<str1<<endl; 
   
  //To show only first 6 characters
  string str2 (Name, 8);
  cout<<str2;
   
   
   return 0;
}
