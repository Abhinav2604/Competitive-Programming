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
#define loopi(n) for(ll i=0;i<n;i++)
#define loopd(n) for(ll i=n;i>0;--i)
#define fori(n) for(ll i=1;i<=n;i++)
#define ford(n) for(ll i=n;i>0;--i)
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
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  ll m=max(max(a,b),max(c,d));
  if(m==a)
  {
    cout<<m-b<<" "<<m-c<<" "<<m-d;
  }
  else if(m==b)
  {
    cout<<m-d<<" "<<m-c<<" "<<m-a;
  }
  else if(m==c)
  {
    cout<<m-d<<" "<<m-b<<" "<<m-a;
  }
  else if(m==d)
  {
    cout<<m-c<<" "<<m-b<<" "<<m-a;
  }

  return 0;
}
