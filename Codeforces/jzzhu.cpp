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
	ll x,y;
  ll n;
  cin>>x>>y;
  cin>>n;
  ll arr[6];
  arr[0]=(x-y)%mod;
  arr[1]=(x%mod);
  arr[2]=(y%mod);
  arr[3]=(y-x)%mod;
  arr[4]=(-x)%mod;
  arr[5]=(-y)%mod;
	if(arr[n%6]<0)
  	cout<<arr[n%6]+mod;
	else
		cout<<arr[n%6];
	return 0;
}
