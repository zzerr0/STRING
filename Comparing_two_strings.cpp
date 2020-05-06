#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t, c=0;
  cin>>t;
  while(t>0)
  {
    string dish1[4];
    for (int i = 0; i < 4; i++) 
    cin>>dish1[i];
     
    cout<<endl;
    
    string dish2[4];
    for (int i = 0; i < 4; i++) 
    cin>>dish2[i];
    cout<<endl;
    
    for(int i =0;i<4;i++)
    {
      for(int j=0;j<4;j++)
      {
       if(dish1[i]==dish2[j])
       c++;
      }
     
    }
     if(c>=2)
      cout<<"similar";
      else
      cout<<"no";
    
   t--;
  }
  return 0;
} 
