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
     	ll n,x;
     	cin>>n>>x;
     	vector<ll> vec(n,0);
     	vector<pair<ll,ll>> tc(n,{0,0});
     	for(int i=0;i<n;i++)
     	{
     		cin>>vec[i];
     		if(vec[i]%x==0)
     			vec[i]--;
     		tc[i].f=vec[i]/x;
     		tc[i].s=i+1;
     	}
     	sort(tc.begin(),tc.end());
     	cout<<"Case #"<<it+1<<":";
     	rep(i,n)
     	{
     		cout<<" "<<tc[i].s;
     	}
     	cout<<"\n";
     }


    


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}