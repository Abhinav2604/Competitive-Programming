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
vll a(65,0);
vll b(65,0);
vll c(65,0);
int main()
{
    fast;
    #ifndef ONLINE_JUDGE
     fio;
    #endif
    ll t,l,r;
    cin>>t;
    rep(i,t)
    { vll a(65,0);
vll b(65,0);
vll c(65,0);
    	cin>>l>>r;
    	ll m,k=0;
    	while(r>0)
    	{
    		if(r&1)
              a[k]=1;
            r=r>>1;
            k++;
    	}
        m=k;
       // cout<<m<<" "<<i<<"\n";
    	k=0;
    	while(l>0)
    	{
    		if(l&1)
              b[k]=1;
            l=l>>1;
            k++;
    	}
        
        for(ll j=m;j>=0;j--)
        {
        	if(a[j]==1 && b[j]!=1)
        	{
        		for(ll p=j;p>=0;p--)
        			c[p]=1;
        		break;
        	}
        	else if(a[j]==1 && b[j]==1)
        		c[j]=1;

        }
       
       // cout<<(2<<3)<<" "<<(1<<2)<<"i\n";
        unsigned long long ans=0;
        
        for(unsigned long long j=0;j<64;j++)
        { //cout<<c[j]<<" "<<j<<"\n";
        	if(c[j]==1)
        	{
        		ans=ans+((ll)1<<(ll)j);
        		//cout<<ans<<"a\n";
        	}
        	


        }
        cout<<ans<<"\n";


    }



    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}