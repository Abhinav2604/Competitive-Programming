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

ll s[3001];
ll c[3001];
ll cs[3001][3001];

int main()
{
    fast;
    //fio;
    ll n;
    cin>>n;
    rep(i,n)
      cin>>s[i];
    rep(i,n)
       cin>>c[i];

    rep(i,n)
    {   cs[i][0]=INT_MAX;
    	repA(j,i+1,n-1)
    	{
             if(s[j]>s[i])
              {cs[i][j]=1;
                cs[i][0]=min(cs[i][0],c[i]+c[j]);}

    	}
    }
    ll ans=INT_MAX;
    rep(i,n)
    {
         repA(j,i+1,n-1)
         {
         	if(cs[i][j]==1)
         		ans=min(ans,c[i]+cs[j][0]);
         }
    }
    if(ans==INT_MAX)
    	cout<<-1;
    else
    	cout<<ans;



    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}