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
  for(i=0;i<t;i++)
  {
    ll n,a,b,x,y,z,u,c,r;
    cin>>n>>a>>b>>x>>y>>z;
    vector<ll> h;
    for(ll j=0;j<n;j++)
    {
      cin>>u;
      h.push_back(u);
    }
    make_heap(h.begin(),h.end());
    c=0;
    r=0;
    c=(z-b)/y;
    if(z<(b+c*y))
       --c;
    ll d=((a+c*x));
    if(d>z || (d>(b+c*y) && x>y))
    {
      cout<<0<<'\n';
    }
    else if(d==z && (x>y || z>((b+c*y))))
    {
      cout<<0<<'\n';
    }
    else
    {
      ll count=0;

      while(d<z)
      { ll m=0;
        d=d+h.front();
        m=h.front();
        if(h.front()==0)
        break;
        pop_heap(h.begin(), h.end());
        h.pop_back();
        h.push_back(m/2);
        push_heap(h.begin(), h.end());
        count++;
      }
      if(d<z && (z==(b+c*y)  || (z>(b+c*y) && x<y )))
        cout<<"RIP\n";
      else
      {
        if(d>z)
          {
            cout<<count<<'\n';
          }
        else if(d==z)
        {
          if(x>y || z>(a+c*y))
            cout<<count<<'\n';
          else if(z==(a+c*y))
          {
            if(h.front()!=0)
               cout<<count+1<<'\n';
          }
          else if(h.front()!=0)
          {
            cout<<count+1<<'\n';
          }

          else
            cout<<"RIP\n";
        }

        // else if(z>(x+c*y))
        // {
        //   if((x+c*y+y)>(d+b))
        //      cout<<"RIP\n";
        // }
      }
    }


  }
  return 0;
}
