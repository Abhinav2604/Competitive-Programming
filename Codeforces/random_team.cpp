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

ll km(ll n, ll m)
{
  ll a,b;
  b=n;
  if(m==1)
  {
    return (n*(n-1))/2;
  }
  else
  {
    b-=m;
    b++;
    return (b*(b-1))/2;
  }
}

ll kmin(ll n,ll m)
{
  ll a,b,t;
  a=n%m;
  b=n/m;
  if(m==1)
  {
    return (n*(n-1))/2;
  }
  else
  {
    t=(b*(b-1))/2;

    return(((m-a)*t)+(a*(((b+1)*b)/2)));
  }
}
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
  ll m,n,i,j,k,max,min;
  cin>>n>>m;
  max=km(n,m);
  min=kmin(n,m);
  cout<<min<<" "<<max;
	return 0;
}
