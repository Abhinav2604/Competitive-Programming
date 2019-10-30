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

typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int arr1[20];
int arr2[20];

int32_t main()
{
    c_p_c();
    int tc; cin>>tc;
    for(int tnum=1;tnum<=tc;++tnum)
    {
    	int n,h; cin>>n>>h;

    	int total1=0;

    	for(int i=0;i<n;++i)
    	{
    		cin>>arr1[i];

    		if(i<n/2)
    			total1 += arr1[i];
    	}

    	for(int i=0;i<n;++i)
    		cin>>arr2[i];

    	vector<pii> first_half;
    	vector<pii> sec_half;
    	int ans=0;

    	if(n==1)
    	{
    		if(!h)
    			ans=3;
    		else
    		{
    			if(arr1[0]>=h && arr2[0]>=h)
    				ans=1;
    			else
    				ans=0;
    		}
    	}

    	else
    	{
    		int sz = n/2;
    		int num = pow(3,sz);

    		for(int mask=0;mask<num;++mask)
    		{
    			int val = mask;
    			int cur1 = total1;
    			int cur2 = 0;
    			int i=0;

    			while(val)
    			{
    				if((val%3)==1)
    					cur2 += arr2[i] , cur1 -= arr1[i];

    				else if((val%3)==2)
    					cur2 += arr2[i];

    				i++;
    				val /= 3;
    			}

    			first_half.pb({cur1,cur2});


    		}

    		total1=0;

    		for(int i=n/2;i<n;++i)
    			total1 += arr1[i];


    		sz = n - sz;
    		num = pow(3,sz);

    		for(int mask=0;mask<num;++mask)
    		{
    			int val = mask;
    			int cur1 = total1;
    			int cur2 = 0;
    			int i = n/2;
    			while(val)
    			{
    				if((val%3)==1)
    					cur2 += arr2[i] , cur1 -= arr1[i];

    				else if((val%3)==2)
    					cur2 += arr2[i];

    				i++;
    				val /= 3;
    			}

    			sec_half.pb({cur1,cur2});

    		}

    		sort(first_half.begin(), first_half.end());
    		reverse(first_half.begin(), first_half.end());

    		sort(sec_half.begin(),sec_half.end());

    		pbds s;
    		int n1 = first_half.size();
    		int n2 = sec_half.size();


    		for(int i=0;i<n2;++i)
    			s.insert(mp(sec_half[i].ss,i));

    		int del=0;

    		for(int i=0;i<n1;++i)
    		{
    			while(del<n2 && sec_half[del].ff < h - first_half[i].ff)
    				s.erase(mp(sec_half[del].ss,del)),del++;

    			int less_than_val = s.order_of_key(mp(h-first_half[i].ss,-1));
    			int sz = s.size();

    			ans += sz - less_than_val;
    		}

    	}
    	
    	cout<<"Case #"<<tnum<<": "<<ans<<'\n';
    }

    return 0;
}