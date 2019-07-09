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
ll max(unordered_map<ll,ll> a)
{
  ll m=0;
  ll res=0;
  ll i=0;
  for(auto it=a.begin();it!=a.end();it++)
  {
    if((it->second)>m)
       {m=(it->second);
         res=(it->first);}
         ++i;
  }
  return res;
}
int main()
{
  std::ios::sync_with_stdio(false);
  ll n,k,q;
  cin>>n>>k;
  char res[n+1];
  unordered_map<ll,ll> umap;
  vll a;
  for(ll i=0;i<n;i++)
  {
    cin>>q;
    a.push_back(q);
    umap.insert(make_pair(i,q));
  }
 ll i=0;
 char t='1';
 ll count=0;
  while(count<=n)
  {
    i=max(umap);
    if(a[i]==0)
      break;
    a[i]=0;
    res[i]=t;
    umap.erase(i);
    ++count;

    //cout<<i<<" ";
    for(ll j=1;j<=k;j++)
    { ll u=0;
      if(i+j<n)
      {   u=0;
        if(a[i+j]==0)
        { //cout<<"u"<<i<<" ";
         u++;
          while(a[i+j+u]==0 &&(i+j+u<n))
              u++;
        }
        if(i+j+u<n)
      {  a[i+j+u]=0;
         umap.erase(i+j+k);
        res[i+j+u]=t;
        ++count;}
      }
      if(i-j>=0)
      { u=0;
        if(a[i-j]==0)
        {
          u++;
          while(a[i-j-u]==0  &&(i-j-u)>=0)
             u++;
        }
        if(i-j-u>=0)
      {  ++count;
        umap.erase(i-j-u);
        a[i-j-u]=0;
        res[i-j-u]=t;
      }
      }
    }
    if(t=='1')
       t='2';
    else
       t='1';
   if(count==n)
  break;
  }
  res[n]='\0';
  cout<<res;
  return 0;
}
