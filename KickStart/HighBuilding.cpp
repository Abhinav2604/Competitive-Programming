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
#define cd complex<double>
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
const double PI = acos(-1);

int main()
{
    fast;
    // #ifndef ONLINE_JUDGE
    //  fio;
    // #endif
     ll t;
     cin>>t;
     rep(it,t)
     {
     	ll n,a,b,c;
     	cin>>n>>a>>b>>c;
     	if(((a-c)+(b-c)+c)>n)
     		cout<<"Case #"<<it+1LL<<": "<<"IMPOSSIBLE\n";
     	else if(n!=1 && (a==1 && b==1))
     	{
     		
     			cout<<"Case #"<<it+1LL<<": "<<"IMPOSSIBLE\n";
     	}
     	else
     	{
     		vector<ll> vec(n,0);

     		if(a==c && b==c)
     		{
     			rep(i,c-1)
     			vec[i]=2;
     			vec[n-1]=2;
     			rep(i,n)
     			if(vec[i]==0)
     				vec[i]=1;

     		}
     		else if(a==c)
     		{
     			rep(i,c)
     			  vec[i]=3;
     			ll y=b-c;
     			for(int i=n-1;i>=n-y;i--)
     				vec[i]=2;
     			for(int i=0;i<n;i++)
     				if(vec[i]==0)
     					vec[i]=1;
     		}
     		else if(b==c)
     		{
     			for(int i=n-1;i>=n-c;i--)
     				vec[i]=3;
     			ll x=a-c;
     			rep(i,x)
     			 vec[i]=2;
     			for(int i=0;i<n;i++)
     				if(vec[i]==0)
     					vec[i]=1;
     		}

     		else if(a!=c && b!=c)
     		{
     			ll x=a-c;
     			ll y=b-c;
     			
     			rep(i,x)
     				vec[i]=2;
     			for(int i=x;i<x+c;i++)
     				vec[i]=3;
     			for(int i=n-1;i>=n-y;i--)
     				vec[i]=2;
     			rep(i,n)
     			{
     				if(vec[i]==0)
     					vec[i]=1;
     			}
     		}
     		if(n<=2)
     			rep(i,n)
     		vec[i]--;


     		cout<<"Case #"<<it+1<<": ";
     		rep(i,n)
     		  cout<<vec[i]<<" ";
     		 cout<<"\n";
     	}


     }
    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}