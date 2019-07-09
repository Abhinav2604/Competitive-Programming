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
  ll n,a;
  unordered_set<ll> se;
  cin>>n;
  for(ll i=0;i<n;i++)
  {
    cin>>a;
    se.insert(a);
  }
  if(se.size()>3)
  {
    cout<<-1;
    return 0;
  }
  if(se.size()==1)
  {
    cout<<0;
    return 0;
  }
  if(se.size()==2)
  {
    auto it=se.begin();
    ll b=*it;
    ++it;
    ll c=*it;
    if((c+b)&1)
      {
        cout<<max(c,b)-min(c,b);
        return 0;
      }
    cout<<abs(c-(c+b)/2);

  }
  if(se.size()==3)
  { //cout<<"p";
    auto it=se.begin();
    ll b[3];
    b[0]=*it;
    ++it;
    b[1]=*it;
    ++it;
    b[2]=*it;
    sort(b,b+3);
    if(b[0]+b[2]!=2*b[1])
       {
         cout<<-1;
         return 0;
       }
    cout<<b[1]-b[0];


  }
  return 0;
}
