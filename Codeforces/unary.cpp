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
#define mod 1000003
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
ll con(int a,int i)
{ ll k=1;
  i=4*i;
  while(i>0)
  {
    k=((k%mod)*((1<<min(15,i))%mod))%mod;
    i=i-15;
  }

  return (a*((k)%mod));
}
int main()
{
	std::ios::sync_with_stdio(false);
	string s;
  int i;
  ll ans=0,a=0;
  cin>>s;
  ll l=s.size();
  for(i=0;i<l;++i)
  { //cout<<s[i];
    switch(s[i])
    {
      case '>': a=con(8,l-i-1);
                ans=((ans%mod)+(a%mod))%mod;
                break;
      case '<':a=con(9,l-i-1);
              ans=((ans%mod)+(a%mod))%mod;
              break;
      case '+':a=con(10,l-i-1);
                ans=((ans%mod)+(a%mod))%mod;
                  break;
      case '-':a=con(11,l-i-1);
              ans=((ans%mod)+(a%mod))%mod;
                break;
      case '.':a=con(12,l-i-1);
            ans=((ans%mod)+(a%mod))%mod;
              break;
      case ',':a=con(13,l-i-1);
            ans=((ans%mod)+(a%mod))%mod;
              break;
      case '[':a=con(14,l-i-1);
              ans=((ans%mod)+(a%mod))%mod;
                break;
      case ']':a=con(15,l-i-1);
            ans=((ans%mod)+(a%mod))%mod;
              break;
    }
  }

  cout<<ans%mod;
	return 0;
}
