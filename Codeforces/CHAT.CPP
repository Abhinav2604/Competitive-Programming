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
	vector<pair<int,int>> z;
  vector<pair<int,int>> x;
  int p,q,l,r,i,j,a,b,k,c,flag=1,count=0;
  k=c=0;
  cin>>p>>q>>l>>r;
  for(i=0;i<p;i++)
  {
    cin>>a>>b;
    z.push_back(make_pair(a,b));
  }
  for(i=0;i<q;i++)
  {
    cin>>a>>b;
    x.push_back(make_pair(a,b));
  }
for(i=l;i<=r;i++)
  for(j=0;j<p;j++)
  {
    for(k=0;k<q;k++)
       if(x[k].second+i>=z[j].first && x[k].first+i<=z[j].second)
       {
         count++;
         flag=0;
         break;
       }
       if(!flag)
       {
         flag=1;
         break;
       }
  }
  cout<<count;
	return 0;
}
