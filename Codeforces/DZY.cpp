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
{	std::ios::sync_with_stdio(false);
	char s[1002];
  ll k,m,l,sum,i,j;
  m=sum=0;
  int w[26];
  cin>>s;
  l=strlen(s);
  cin.ignore();
  cin>>k;
  for( i=0;i<26;i++)
  {
    cin>>w[i];
    if(w[i]>m)
      m=w[i];
  }
  for( i=0;i<l;i++)
  {
    sum+=(i+1)*w[s[i]-'a'];
  }
  for(j=1;j<=k;j++)
  {
    sum+=(i+j)*m;
  }
  cout<<sum;
	return 0;
}
