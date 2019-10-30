#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds; 
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
}

int torn[100001];
int useless[100001];

int32_t main()
{
    c_p_c();
    int tc; cin>>tc;
    for(int tnum=1;tnum<=tc;++tnum)
    {
    	int n,m,q; cin>>n>>m>>q;
    	memset(useless,-1,sizeof(int)*(n+1));
    	memset(torn,0,sizeof(int)*(n+1));

    	while(m--)
    	{
    		int p; cin>>p;
    		torn[p]=1;
    	}

    	int ans = 0;

    	while(q--)
    	{
    		int i; cin>>i;

    		if(useless[i]==-1)
    		{
    			useless[i]=0;
    			for(int j=i;j<=n;j+=i)
    				if(torn[j])
    					useless[i]++;
    		}

    		ans += (n/i - useless[i]);
    	}

    	cout<<"Case #"<<tnum<<": "<<ans<<'\n';
    }
    return 0;
}