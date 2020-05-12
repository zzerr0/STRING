#include<iostream>
using namespace std;
//copying with iterative method 
void itercopy(char *s1, int n)
{ 

  char s2[n];
  for(int i=0;i<n;i++)
  s2[i]=s1[i];
 
  cout<<s2<<endl;
}

//copying using recursive method
void recurcopy(char *s1,char *s2,int n=0)
{
 
  s2[n]=s1[n];
  if(s1[n]==NULL)
  {
    return;
  }
  recurcopy(s1,s2,n+1);
}
int main()
{ 
  //
  cout<<"Enter size of str ";
  int n;
  cin>>n;
  char str1[n];
  char str2[n];
  cin>>str1;
  //iterative method
  cout<<"With iterative Method "<<endl;
  itercopy(str1, n);
  cout<<"With recursive Method "<<endl;
  recurcopy(str1, str2);
  cout<<str2<<endl;
  return 0;
}
