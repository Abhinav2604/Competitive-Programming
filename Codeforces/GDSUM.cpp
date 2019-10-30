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
   // fio;
    ll n,k;
    cin>>n>>k;
    vector<ll> vec(n,0);
    unordered_map<ll,ll> myMap;
    for(ll i=0;i<n;i++)
    {
    	cin>>vec[i];
    	myMap[vec[i]]++;
    }
    ll res=1;
    res=res+n;
    res=res%mod;
    ll s=myMap.size();
    vector<ll> ty(s,0);
    vector<ll> u(s,0);
    ll sum=0;
    ll i=0;
    for(auto it=myMap.begin();it!=myMap.end();it++,i++)
    {
    	ty[i]=it->second;
    	u[i]=ty[i];
    	sum=sum+(it->second);
    }
    vector<ll> presum(s+1,0);
    presum[s-1]=ty[s-1];
    for(i=s-2;i>=0;i--)
    {
         presum[i]=(presum[i+1] + ty[i])%mod;
    }
    ll j=2;
    while(j<=k && j<=s)
    {
    	for(i=0;i<s;i++)
    	{
    		ty[i]=((u[i]%mod)*(presum[i+1]))%mod;
    	}
    	 presum[s-1]=ty[s-1];
     	for(i=s-2;i>=0;i--)
   		 {
         	presum[i]=(presum[i+1] + ty[i])%mod;
    	}
        //cout<<presum[0]<<" "<<j<<"\n";
    	res=(res%mod + presum[0]%mod)%mod;
    	j++;

    }
    cout<<res%mod;


    
    return 0;
}