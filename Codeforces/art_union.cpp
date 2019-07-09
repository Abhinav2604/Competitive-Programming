#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	ll m,n,i,j;
  cin>>m>>n;
  ll a[m+1][n+1]={ };
  for(i=1;i<=m;i++)
  {  for(j=1;j<=n;j++)
      cin>>a[i][j];}

for(i=1;i<=m;i++)
{  for(j=1;j<=n;j++)
  {
    if(j==1)
    {
      a[i][j]=a[i-1][j] + a[i][j];
    }
    else if( i==1)
    {
      a[i][j]=a[i][j-1] + a[i][j];
    }
    else
    {
      a[i][j]=a[i][j] + max(a[i][j-1],a[i-1][j]);
    }
  }
}
    for(i=1;i<=m;i++)
       cout<<a[i][n]<<" ";
	return 0;
}
