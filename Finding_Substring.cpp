//FINDING SUBSTRING OF A STRING 
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s="shivam";
  int n=s.size();
  
  for(int i=0;i<n;i++)
   {
    for(int j=0;j<=n-i;j++)
    {
     cout<<s.substr(i,j);
     cout<<endl;
    }
    cout<<endl;
   }
  return 0;  
}      
