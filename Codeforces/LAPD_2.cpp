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
    ll t,a,b,c,res,k,B;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
    	cin>>a>>b>>c;
    	res=0;
    	
    	c--;
    	a--;
    	if(a==0 || c==0)
    	{
    		cout<<0<<"\n";
    		continue;
    	}
    	
   
   for(ll o=1;o<=b;o++)
{     B=o*o;
	k=min(a,min(o,c));
    	for(ll j=1;j<=(k);j++)
    	{
              ll r=(B/j);
            //  ll m=B%j;
              if(r<=c)
             	 res=(res+(c-r))%mod;
              if(r<=a)
             	 res=(res+(a-r))%mod;
    	}
    	if(o==k)
    	{ 
    		ll p=(a-k);
    		ll q=(c-k);
    		//cout<<p<<" "<<q<<" "<<o<<"\n";
    		res=(res+(p*q)%mod)%mod;
    	}
    }

        cout<<res<<"\n";
    }




    
    return 0;
}