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
long  hcf(long a,long  b)
{
  if(a==0)
    return b;
  if(b==0)
    return a;
  if(a==b)
    return a;
  if(a>b)
     return hcf(a-b,b);
  return  hcf(a,b-a);
}
int main()
{
	std::ios::sync_with_stdio(false);
long double a,b,c,d;
long p,q,e=0;
cin>>a>>b>>c>>d;
if((a/b)>=(c/d))
{
  p=a*d-b*c;
  q=a*d;
  e=hcf(p,q);
  p=p/e;
  q=q/e;
  cout<<p<<'/'<<q;
}
else if((a/b)<(c/d))
{
  p=c*b-a*d;
  q=c*b;
  e=hcf(p,q);
  p=p/e;
  q=q/e;
cout<<p<<'/'<<q;
}

	return 0;
}
