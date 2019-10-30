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
  //  fio;
    ll t,n,m;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	cin>>n>>m;
    	if(m>((n*n +n )/2) || m<(n-1))
    		cout<<"-1\n";
    	else
    	{  if(n==1 && m==1)
    		{
    			cout<<1<<"\n";
    		}
    		else if(n==2 && m==1)
    		{
    			cout<<1<<"\n";
    		}

    		else if(m==(n-1))
    		{
    			if(m==0)
    				cout<<0<<'\n';
    			else
    				cout<<2<<'\n';
    		}
    		else if(m>=(n-1) && m<=(n+1))
    		{
    			cout<<2<<'\n';
    		}
    		else if(m>(n+1) && m<=(2*n))
    		{
    			cout<<3<<"\n";
    		}
    		else
    		{
    			ll k=m/n;
    			ll rem=m%n;
    			if(rem==0)
    				cout<<(2*k-1)<<'\n';
    			else
    			{
    				if(rem>n/2)
    					cout<<2*k+1<<'\n';
    				else
    					cout<<2*k<<"\n";
    			}
    		}
    	}
    }


    
    return 0;
}