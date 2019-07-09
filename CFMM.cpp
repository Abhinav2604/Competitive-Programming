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
  string a;
  unordered_set<char> us;
  us.insert('c');
  us.insert('o');
  us.insert('d');
  us.insert('e');
  us.insert('h');
  us.insert('f');
  cin>>t;
  ll res[t]={};
  for(i=0;i<t;i++)
  { ll n,co[26]={};
    cin>>n;
    for(ll k=0;k<n;k++)
  { a.clear();
     cin>>a;
    for(ll j=0;a[j]!='\0';j++)
    {if(us.find(a[j])!=us.end())
      ++co[a[j]-'a'];
    }
  }
  co['c'-'a']=co['c'-'a']/2;
  co['e'-'a']=co['e'-'a']/2;
  ll mi=INT_MAX;
  mi=min(  co['c'-'a'],min(  co['o'-'a'],min(  co['d'-'a'],min(  co['e'-'a'],min(  co['h'-'a'],  co['f'-'a'])))));
  res[i]=mi;
  }
  for(i=0;i<t;i++)
    cout<<res[i]<<"\n";
  return 0;
}
