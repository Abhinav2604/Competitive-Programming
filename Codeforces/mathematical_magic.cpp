#include<iostream>
using namespace std;
long int countSetBits(long int n)
{
    long int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
int main()
{
  int t,i,n;
  cin>>t;
  long int count[t];
  for(i=0;i<t;i++)
  { long int a;
    cin>>a;
    count[i]=countSetBits(a);
  }

  for(i=0;i<t;i++)
  {
    cout<<(long int)(1<<count[i])<<"\n";
  }
  return 0;
}
