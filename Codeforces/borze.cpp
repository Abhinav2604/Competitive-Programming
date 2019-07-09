#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  int a[200];
  int i,l,j;
  j=0;
  cin>>s;
  l=s.size();

 for(i=0;i<l;i++)
  {
    if(s[i]=='.')
    {
      a[j]=0;
      ++j;
    }
    else if(s[i]=='-' && s[i+1]=='.')
    {
      a[j]=1;
      ++j;
      ++i;
    }
    else
    {
      a[j]=2;
      ++j;
      ++i;
    }
  }
  for(i=0;i<j;i++)
  cout<<a[i];
  return 0;
}
