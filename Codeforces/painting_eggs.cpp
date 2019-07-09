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
	ll n,i,a,g,sg,sa;
  n=i=a=g=sg=sa=0;

  int flag=1;
  cin>>n;
  char s[n+1];
  //vector<pair<ll,ll>> mon;
  for(i=0;i<n;i++)
  {
    cin>>a>>g;
    if(flag)
    {if((sa+a-sg)<=500)
     {
      s[i]='A';
      s[i+1]='\0';
      sa=sa+a;
     }
    else if((sg+g-sa)<=500)
    {
      s[i]='G';
      s[i+1]='\0';
      sg=sg+g;
    }
    else
       flag =0;}
}

  if(!flag)
    {
      cout<<-1;
      return 0;
    }
  else
  {
    cout<<s;
  }
	return 0;
}
