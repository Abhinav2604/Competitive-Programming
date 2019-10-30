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
    #ifndef ONLINE_JUDGE
     fio;
    #endif
    ll t;
    ll n,q;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	cin>>n>>q;
    	ll a,b,mm,m;
    	vector<ll> vec;
    	vector<ll> diff;
    	vector<ll> one;
    	vector<ll> two;
    	for(ll j=0;j<(n-1);j++)
    	{
    		cin>>a;
    		vec.push_back(a);
    	}
    	if(n<=4)
    	{
             for(ll j=0;j<q;j++)
             {
             	cin>>a>>b;
            mm=min(a,b);
            m=max(a,b);
            if(((m-mm)&1)==0)
            {
            	cout<<"UNKNOWN\n";
            }

            else
            {
            	if(m==4 && mm==1)
            	{
            		cout<<vec[0] -vec[1] + vec[2]<<"\n";
            	}
            	else
            	{
            		cout<<vec[mm-1]<<"\n";
            	}
             }
            }
    	}
    	else
    	{
    	for( ll j=1;j<(n-1);j++)
    	{
    		diff.push_back(vec[j-1]-vec[j]);
    	}
    	one.push_back(diff[0]);
    	two.push_back(diff[1]);
    	for(ll j=2,k=0;j<diff.size();j=j+2,k++)
    	{
                 one.push_back(one[k]+diff[j]);
    	}
    	for(ll j=3,k=0;j<diff.size();j=j+2,k++)
    	{
                 two.push_back(two[k]+diff[j]);
    	}
    	
    	for(ll j=0;j<q;j++)
    	{
    		cin>>a>>b;
            mm=min(a,b);
            m=max(a,b);
            if(((m-mm)&1LL)==0)
            {
            	cout<<"UNKNOWN\n";
            }
            else
            {
            	if((m-mm)==1)
            	{
            		cout<<vec[mm-1]<<"\n";
            	}
            	else
            	{
            		if((mm&1LL)!=0)
            		{
            			m=m-1;
            			ll o=(mm-1)/2;
            			if(o!=0)
            			o--;
            			ll h=(m-1)/2;
            			h--;
            			ll rt;
            			if(mm!=1)
            			rt=one[h]-one[o];
            		    else
            		    	rt=one[h];
            			cout<<rt+vec[m-1]<<"\n";

            		}
            		else
            		{
            			m=m-1;
            			ll o=(mm-2)/2;
            			if(o!=0)
            			o--;
            			ll h=(m-2)/2;
            			h--;
            			ll rt;
            			if(mm!=2)
            			rt=two[h]-two[o];
            		   else
            		   	rt=two[h];
            			cout<<rt+vec[m-1]<<"\n";
            		}
            	}
            }
        }



    	}

    }


    
    return 0;
}