#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n,m,i,t,ans,k,a,r,j;
cin>>n>>m;
//long int arr[m]={};
//queue<long int> g;
//for(i=1;i<=n;i++)
    //g.push(i);
ans=t=a=r=0;
j=1;
for(i=0;i<m;i++)
{
  cin>>t;
  if(j<t)
  {
    ans+=(t-j);
    j=t;
    //cout<<ans<<"\t";
  }
  else if(j>t)
  {
    ans+=((n-j)+t);
    j=t;
    //cout<<ans<<"\t";
  }
  //while(t!=g.front())
/*  {
    ans++;
    k=g.front();
    g.pop();
    g.push(k);
  }*/
}
cout<<ans;
return 0;
}
