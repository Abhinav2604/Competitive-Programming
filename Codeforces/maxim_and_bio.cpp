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
  string s;
  int n,i,op,mi=INT_MAX;
  cin>>n;
  cin>>s;
  for(i=0;i<s.size()-3;i++)
  { op=0;
    op=op+min(abs(s[i]-'A'),(abs(s[i]-'Z')+1));
    //cout<<op<<" ";
    op=op+min(abs(s[i+1]-'C'),(abs(s[i+1]-'Z')+3));
      //cout<<op<<" ";
    op=op+min(abs(s[i+2]-'T'),(abs(s[i+2]-'A')+7));
      //cout<<op<<" ";
    op=op+min(abs(s[i+3]-'G'),abs(s[i+3]-'Z')+7);
      //cout<<op<<" ";
    if(op<mi)
      mi=op;
  }
  cout<<mi;
  return 0;
}
