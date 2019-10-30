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
    //fio;
   

    ll q;
    ll n,m;
    ll mo=0;
    ll s=0;
    ll res=0;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    	cin>>n>>m;
    	mo=m%10;
    	res=0;
    	if(mo==5)
    		s=25;
    	else if(mo==0)
    		{
    			cout<<0<<"\n";
    			continue;
    		}
    	else if((mo%2)==0)
    		s=40;
    	
    	else
    		s=45;
       ll j=(n/m);
       res=(j/10)*s;
       ll k=j-(j%10) +1;
       for(ll op=m*k;op<=n;op=op+m)
       {
                res=res+(op%10);
       }
       cout<<res<<"\n";




    }

    
    return 0;
}