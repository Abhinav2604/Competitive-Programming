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
  ll n,b,a;
  cin>>n>>b>>a;
  ll m=a;
  ll s[n+1];
  s[0]=0;
  for(ll i=1;i<=n;i++)
  {
    cin>>s[i];
  }
  ll count=0;
  ll i=1;
  while(n>count   && i<=n)
  {
    if(s[i]==0)
    {
      if(b==0 && a==0)
         break;
      if(a==0)
      {
        b=b-1;
        count++;
      }
      else
        {a=a-1;
          count++;}
    }

      if(s[i]==1)
      {
        if(a==m || ((b==0)&& (a!=0) ))
          {
            a=a-1;
            count++;
          }
        else if(b!=0)
        {
          b=b-1;
          a++;
          count++;
        }
        if((b==0)&&(a==0))
          break;
      }
      ++i;
    }


  cout<<count;
  return 0;
}
