#include<bits/stdc++.h>
using namespace std;
int setbits(long long int n)
{ int count =0;
  while(n)
  {
    count++;
    n=n&(n-1);
  }
  return count;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int n,m,k,i,t;
long int ans;
n=m=k=ans=0;
cin>>n>>m>>k;
long long int arr[m+1];
for(i=0;i<=m;i++)
{
  cin>>arr[i];
}
t=arr[m];
for(i=0;i<m;i++)
{
  if(setbits(t^arr[i])<=k)
    ans++;
}
cout<<ans;
return 0;
}
