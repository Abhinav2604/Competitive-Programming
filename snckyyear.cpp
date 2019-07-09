#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t,n,i;
  cin>>t;
  int count[t];
  for( i=0;i<t;i++)
  {
    cin>>n;
    if((n>2010 && n<2015)||n==2018)
       count[i]=0;
    else
      count[i]=1;
  }
  for(i=0;i<t;i++)
  {
    if(count[i]==1)
    cout<<"HOSTED\n";
    else
    cout<<"NOT HOSTED\n";
  }
  return 0;
}
