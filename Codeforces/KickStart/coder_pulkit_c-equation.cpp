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

int arr[1001];
int cnt[54];

int32_t main()
{
    c_p_c();
    int tc; cin>>tc;

    for(int tnum=1;tnum<=tc;++tnum)
    {
    	memset(cnt,0,sizeof(cnt));

    	int n,m; cin>>n>>m;
    	int ans=0,sum_val=0;

    	for(int i=1;i<=n;++i)
    		cin>>arr[i];

    	for(int id=1;id<=n;++id)
    	{
    		int x = arr[id];
    		int i=0;
    		while(x)
    		{
    			if(x&1)
    				cnt[i]++;

    			x/=2;
    			i++;
    		}
    	}

    	/*for(int i=0;i<5;++i)
    		cout<<cnt[i]<<' ';
    	cout<<'\n';*/

    	for(int i=0;i<54;++i)
    	{
    		//cout<<cnt[i]<<'\n';
    		if(cnt[i]*2>=n)
    		{
    			ans += pow(2,i);
    			sum_val += (n-cnt[i])*pow(2,i);
    		}
    		else
    		{
    			sum_val += cnt[i]*pow(2,i);
    		}
    	}

    	//cout<<sum_val<<'\n';

    	if(sum_val>m)
    		ans=-1;

    	else
    	{
    		//cout<<ans<<' '<<sum_val<<"*\n";
    		for(int i=53;i>=0;--i)
    		{
    			if(cnt[i]*2>=n)
    				continue;

    			int add_val = (n-2*cnt[i])*pow(2,i);

    			if(sum_val+add_val<=m)
    			{
    				ans += pow(2,i);
    				sum_val += add_val;
    				//cout<<ans<<' '<<sum_val<<'\n';
    			}
    		}
    	}

    	cout<<"Case #"<<tnum<<": "<<ans<<'\n';
    }
    return 0;
}