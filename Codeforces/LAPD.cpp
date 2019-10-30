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
    fio;    
    ll t,a,b,c,res,k,B;
    vector<vector<ll>> vec(5002,vector<ll> (5002,0));
    vector<vector<ll>> pre(5002,vector<ll> (5002,0));

    for(ll i=1;i<=5000;i++)
    {
        for(ll j=1;j<=5000;j++)
        {
            vec[i][j]=((i*i)/j);

        }
    }

    for(ll i=1;i<=5000;i++)
    {
        for(ll j=1;j<=5000;j++)
        {
            pre[i][j]=(vec[i][j]+pre[i][j-1])%mod;

        }
    }

 /*  for(ll i=1;i<7;i++)
    {
        cout<<vec[2][i]<<" ";
    }
    cout<<"io\n";
    for(ll i=1;i<7;i++)
    {
        cout<<pre[2][i]<<" ";
    }*/
    
    


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
{     
	k=min(a,min(o,c));
         ll kc=min(o,c);
         ll ka=min(o,a);
         if(vec[o][kc]<a)
         {  vector<ll>::iterator it; 
            it =lower_bound(vec[o].begin()+1,vec[o].begin()+kc+1, a,greater<ll>());
            ll yc=it-vec[o].begin();
            ll n=kc-yc+1;
            //cout<<yc<<" "<<n<<"a\n";
            ll num=n*(a)-(pre[o][kc]-pre[o][yc-1]);
            res=(res+num)%mod;

         }
          if(vec[o][ka]<c)
         {
            auto it =lower_bound(vec[o].begin()+1,vec[o].begin()+ka+1,c,greater<ll>());
            ll ya=it-vec[o].begin();
            ll n=ka-ya+1;
            //cout<<ya<<" "<<n<<"c\n";
            ll num=n*(c)-(pre[o][ka]-pre[o][ya-1]);
            res=(res+num)%mod;

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



cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    
    return 0;
}