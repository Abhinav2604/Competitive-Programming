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
#define MP make_pair
#define PB push_back
#define X first
#define Y second
using namespace std;
ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
	// Base Case 
	if (a == 0) 
	{ 
		*x = 0; 
		*y = 1; 
		return b; 
	} 

	ll x1, y1; // To store results of recursive call 
	ll gcd = gcdExtended(b%a, a, &x1, &y1); 

	// Update x and y using results of 
	// recursive call 
	*x = y1 - (b/a) * x1; 
	*y = x1; 

	return gcd; 
} 

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int main()
{
    fast;
    fio;
    ll n,p,w,d;
    cin>>n>>p>>w>>d;
    ll x1,y1;
    ll g=gcd(w,d);
    if(p%g!=0)
    {
    	cout<<"-1";
    	return 0;
    }
    if(p==0)
    {
    	cout<<0<<" "<<0<<" "<<n;
    	return 0;
    }
    if(p%w==0)
    { 
           x1=p/w;
           y1=0;
    }
    else if(p%d==0)
    {
    	x=0;
    	y1=p/d;
    }

    ll pm=p%w;
    ll ww=w+pm;
    

    cout<<"-1";



    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}