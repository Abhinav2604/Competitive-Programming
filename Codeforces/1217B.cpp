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

int main()
{
    fast;
    //fio;
    ll t;
    ll n,x;
    ll dmax=INT_MIN;
    ll diff=INT_MIN;
   ll res=INT_MAX;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	cin>>n>>x;
    	
    	res=INT_MAX;
    	dmax=INT_MIN;
    	diff=INT_MIN;
    	vector<ll> d(n,0);
            vector<ll> h(n,0);
    	for(ll j=0;j<n;j++)
    	{
            
    		cin>>d[j]>>h[j];
    		dmax=max(dmax,d[j]);
    		diff=max(diff,d[j]-h[j]);


    		

    	}
    
    		if(dmax>=x)
    			res=1;
    		else if(diff>0)
    		{
    			ll k=x-dmax;
    			ll ki=ceil((double)((double)k/(double)diff));
    			res=ki+1;
    		}

 
    	if(res==INT_MAX)
    		cout<<-1<<"\n";
    	else
    		cout<<res<<"\n";
    }


    
    return 0;
}