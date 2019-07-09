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
  ll n,m,i,a,b,j;
  cin>>n>>m;
  bool check[n+1];
  mem(check,true);
  for(i=1;i<=m;i++)
  {
    cin>>a>>b;
    check[a]=check[b]=false;
  }
  for(i=1;i<=n;i++)
  {
    if(check[i])
      break;
  }
  cout<<n-1<<"\n";
  for(j=1;j<=n;j++)
  {
    if(i!=j)
       cout<<i<<" "<<j<<"\n";
  }

	return 0;
}
