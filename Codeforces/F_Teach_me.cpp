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
 ll arr[50001][6];
int main()
{
    fast;
    //fio;
    ll t,n,s,c;
   
    unordered_set<ll> se[1001];
    cin>>t;
    for(ll i=0;i<t;i++)
    {   unordered_set<ll> se[1001];
         cin>>n>>s;
         for(ll j=0;j<n;j++)
         {  cin>>c;
         	arr[j][0]=c;
         	for(ll k=1;k<=c;k++)
         	{
         		cin>>arr[j][k];
         		se[arr[j][k]].insert(j);
         	}
         }
          ll p=n;
          ll ans=0;
         for(ll j=0;j<n;j++)
         {  p=n;
         	unordered_set<ll> seee;
         	seee=se[arr[j][1]];
         	seee.erase(j);
         	ans=ans+(n-seee.size()-1);
         	for(ll k=2;k<=arr[j][0] && seee.size()>0;k++)
         	{     unordered_set<ll> seet=seee;
                 for(auto it=seee.begin();it!=seee.end();it++)
                 {
                 	if(se[arr[j][k]].find(*it)==se[arr[j][k]].end())
                 	{
                 		seet.erase(*it);
                 		ans++;
                 	}
                 }
                 seee=seet;
         	}
         }

       cout<<"Case #"<<i+1<<":"<<" "<<ans<<"\n";

    }


    
    return 0;
}