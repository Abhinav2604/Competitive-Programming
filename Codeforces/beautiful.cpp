#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int a,b,i,j,x,y;
  a=0;b=0;
  for(i=1;i<6;i++)
  {
    for(j=1;j<6;j++)
    {
      cin>>x;
      if(x==1)
      { y=x;
        b=j;
      }
    }
    if(y==1)
    {
      y=0;
      a=i;
    }
  }
  cout<<abs(3-a)+abs(3-b);
  return 0;
}
