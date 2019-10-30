#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(long long int i=0;i<(n);++i)
#define repA(i,a,n) for(long long int i=a;i<=(n);++i)
#define repD(i,a,n) for(long long int i=a;i>=(n);--i)
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
void rem_0(vll &vec,ll i,ll n,ll o)
{
	repA(j,i,o)
	{
		cout<<vec[j]<<" ";
	}
}
void rem_1(vll &vec,ll i,ll n,ll o)
{  
	repA(j,i,o)
	{
		if(j==(n/2) && (n&1LL))
			cout<<0<<" ";
		else if(j<(n/2))
		{
             cout<<((vec[j])^(vec[n-1-j]))<<" ";
		}
		else
		{
			cout<<vec[n-1-j]<<" ";
		}
	}
}
void rem_2(vll &vec,ll i,ll n, ll o)
{
	repA(j,i,o)
	{
		if(j==(n/2) && (n&1LL))
			cout<<0<<" ";
		else if(j>=(n/2))
		{
             cout<<((vec[j])^(vec[n-1-j]))<<" ";
		}
		else
		{
			cout<<vec[n-1-j]<<" ";
		}
	}
}

int main()
{
    fast;
   // fio;
    ll t,n,k;
    cin>>t;
    rep(i,t)
    {
    	cin>>n>>k;
    	k=k-1LL;
    	vll vec(n,0);
    	ll rem=k/n;
    	rem=rem%3;
    	rep(m,n)
    	{
    		cin>>vec[m];
    	}
    	if(k>=(n/2) && (n&1LL))
    		vec[n/2]=0;
    	
            ll o=k%n;
            if(rem==0)
            {
            	rem_1(vec,0LL,n,o);
            	rem_0(vec,o+1LL,n,n-1LL);
            }
            else if(rem==1)
            {
            	rem_2(vec,0LL,n,o);
            	rem_1(vec,o+1LL,n,n-1LL);
            }
            else
            {
            	rem_0(vec,0LL,n,o);
            	rem_2(vec,o+1LL,n,n-1LL);
            }
            
      cout<<"\n";

    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}