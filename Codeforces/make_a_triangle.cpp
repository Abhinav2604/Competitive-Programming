#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if((a-(b+c))>=0)
   cout<<(a-(b+c))+1<<"\n";

  else if((b-(a+c))>=0)
  {
    cout<<(b-(a+c))+1<<"\n";
  }
  else if((c-(a+b))>=0)
  {
    cout<<(c-(a+b))+1<<"\n";
  }
  else
    cout<<0;
    return 0;
}
