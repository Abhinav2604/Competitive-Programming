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

int main()
{
    fast;
    #ifndef ONLINE_JUDGE
     //fio;
    #endif
     ll n,c;
     cin>>n>>c;
     vll vec(n+1,0);
     vll cd(n+1,0);
      ll prevCost=0;
      ll nowCost=0;
      ll cost=0;
     repA(i,2,n)
        cd[i]=cd[i-1]+c;
        
     repA(i,1,n)
       cin>>vec[i];

    for(ll i=1;i<n;)
    {   prevCost=((vec[i+1]-vec[i]))*(vec[i+1]-vec[i]) +c;
    	ll previ=i;
    	for(ll j=i+1;j<=n;j++)
    	{    nowCost=(vec[j]-vec[previ])*(vec[j]-vec[previ]) +c;
             
    		if(prevCost>nowCost || j==n)
    		{
    			cost+=min(nowCost,prevCost);
    			i=j;
    			break;

    		}
    		else
    			{prevCost+=(vec[j]-vec[i])+c;}
    		i=j;
    	}
    }
    cout<<cost;

    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}