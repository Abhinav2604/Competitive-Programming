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
#define nn 1000001

using namespace std;


int main()
{
	std::ios::sync_with_stdio(false);
  bool prime[nn+1];
  memset(prime, true, sizeof(prime));
  prime[0]=prime[1]=false;
  for (ll  p=2; p*p<=nn; p++)
  {
      // If prime[p] is not changed, then it is a prime
      if (prime[p] == true)
      {
          // Update all multiples of p greater than or
          // equal to the square of it
          // numbers which are multiple of p and are
          // less than p^2 are already been marked.
          for (ll i=p*p; i<=nn; i += p)
              prime[i] = false;
      }
  }


  ll n,i,x;
  cin>>n;
  //ll aa[n];
  bool res[n];
  for(i=0;i<n;i++)
  {
    cin >> x;
    double s = sqrt ((double)(x));
    if (s==(long long)s)
    {
        if (prime[(long long)s]==true) { res[i]=(true); continue;}
    }
    res[i]=(false);
}

for (unsigned i=0;i<n;i++)
    if (res[i]) cout <<"YES" << endl;
    else cout << "NO"<<endl;



	return 0;
}
