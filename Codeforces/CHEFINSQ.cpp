#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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

long long nChoosek(ll n,ll k)
{  if(k==0 || n==k)
	return 1;
	if(n<k)
		return 0;
	k=min(n-k,k);
	ll res=1;
	for(ll i=1;i<=k;i++)
	{
		res=(res*n)/i;
		n--;
	}
	return res;
}

int main()
{
    fast;
   // fio;
  ll t,n,k;
  cin>>t;
  for(ll i=0;i<t;i++)
  {
  	cin>>n>>k;
  	vector<ll> vec(n,0);
  	for(ll j=0;j<n;j++)
  	{
       cin>>vec[j];
  	}
  	sort(vec.begin(),vec.end());
  	ll sum=0,count=1,l=0,prevsum=0,r=0;
  	l=lower_bound(vec.begin(),vec.end(),vec[k-1])-vec.begin();
  	r=upper_bound(vec.begin(),vec.end(),vec[k-1])-vec.begin();
  	ll c=k-l;
  	ll tt=r-l;
  	if(tt==c)
  		count =1;
  	else
  		count=nChoosek(tt,c);
  	cout<<count<<"\n";

  }

    
    return 0;
}