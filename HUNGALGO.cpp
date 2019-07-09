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
  ll t,i;
  cin>>t;
  bool res[t];
  for(i=0;i<t;i++)
  { ll n,a;

    cin>>n;
    ll c[n]={};
    ll r[n]={};
    for(ll k=0;k<n;k++)
    {
      for(ll j=0;j<n;j++)
      {
        cin>>a;
        if(a==0)
        {
          c[j]=1;
          r[k]=1;
        }
      }
    }
    res[i]=true;
    for(ll k=0;k<n;k++)
    {
      if(c[k]!=1 || r[k]!=1)
         {
           res[i]=false;
           break;
         }
    }
  }
  for(i=0;i<t;i++)
  {
    if(res[i])
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
}
