#include <iostream>

#include<algorithm>

using namespace std;

int main()

{

  string a, b;

  getline(cin, a);

  getline(cin, b);

  int n=a.size();

  

  for(int i=0;i<n;i++)

   {

     

    for(int j=0;j<=n-i;j++)

    {

     string s1, s2,res;

     s1=a.substr(i,j);

     cout<<s1;

     cout<<endl;

     s2=b.substr(i, j);

     cout<<s2;

     cout<<endl;

     s1.append(s2);

     res=s1;

     reverse(res.begin(),res.end());

     if(res==s1)

     cout<<"yes"<<endl;

     else

     cout<<"no"<<endl;

    }

    cout<<endl;

   }

  return 0;  

}      
