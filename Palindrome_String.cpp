#include <iostream>
#include<string>
using namespace std;

//program to check if string is palindrome or not

int main()
{
    cout << "Hello, Z3R0 !"<<endl;
    char str[20];
    cout<<"Enter String "<<endl;
    cin>>str;
  // one way for finding the Length of String is
  // int len = str.length();
  // int len = str.size();
  
  //another way for finding the length of string is
  int len;
  int flag = 1;
  //it will keep increase the len value by one 
  //until the null arives it stops
  for(len = 0; str[len] != '\0'; ++len);
  int i, j;
  //for loop to check if string is palindrome or not
  for(i = 0, j = len-1; i < len/2; i++, j--)
  {
    if( str[i] != str[j] )
    {
      flag = 0;
      break;
    }
  }
  if( flag == 1)
  {
    cout<<"String is palindrome"<<endl;
  }
  
  if( flag == 0)
  {
    cout<<"String is not palindrome"<<endl;
  }
  
 return 0; 
}
