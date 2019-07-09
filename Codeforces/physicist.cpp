#include<iostream>
using namespace std;
int main()
{
  int x, y,z,a,b,c, n, i;
  cin>>n;
  x=0;
  y=0;
  z=0;
  for(i=0;i<n;i++)
  {
    cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
  }
  if(x!=0||y!=0||z!=0)
  {
    cout<<"NO";
  }
  else
  cout<<"YES";
  return 0;
}
