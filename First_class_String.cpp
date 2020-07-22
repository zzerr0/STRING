#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a = "I am ";
  string b = "Zero, I build Drones ";
  string c = a + b;
  
  cout<<"First Class C is \n"<<c<<endl;
  cout<<"Primitive C is \n"<<c.c_str()<<endl;
  
  // reference variable
  int age = 20;
  int &myage = age;
  cout<<" Age is "<<myage<<endl;
  
  return 0;
}
