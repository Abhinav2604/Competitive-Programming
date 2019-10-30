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
#define MAXN   10000001 

using namespace std;
ll spf[MAXN]; 
vector<ll> prime_100;
vector<ll> cum(MAXN);
map<ll,ll> myMap;

void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (int i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 

    for(ll i=2;i*i*i<=10000000;i++)
    {
    	if(spf[i]==i)
    		prime_100.push_back(i);
    }


}
void getFactorization(ll x) 
{ 
	ll c=0;
	ll j=0;
	ll k,m,n;
	for(ll i=prime_100[j];i*i*i<=x,j<prime_100.size();i=prime_100[j])
	{   c=0;
		
		if((x%i)==0)
		{ 
			myMap[i]++;
			while((x%i)==0)
				x=x/i;
		}
		j++;
	}
	if(x!=1)
	{
       k=x;
      // cout<<x<<"ggu  ";
       if(spf[x]==k)
       {
       	   myMap[x]++;
       }
       else
       {
       m=spf[x];
       n=spf[x/m];
       if(m==n)
       {
       	 myMap[m]++;
       }
       else
       {
       	myMap[m]++;
       	myMap[n]++;
       }
       }
	}

} 


int main()
{
    fast;
   // fio;
    sieve();
    ll n,m,a,l,r;
    ll ma=0;
    cin>>n;
    rep(i,n)
    {
    	cin>>a;
    	ma=max(a,ma);
    	getFactorization(a);
    }
    
    
    for(ll i=2;i<=ma;i++)
    {
    	if(spf[i]==i)
    		cum[i]=myMap[i]+cum[i-1];
    	else
    		cum[i]=cum[i-1];
    }
    cin>>m;
    rep(i,m)
    {
    	cin>>l>>r;
    	if(r>=ma)
    		r=ma;
    	if(l==0)
    		l=1;
    	if(l>ma)
    	  cout<<0<<"\n";
    	else
    	cout<<cum[r]-cum[l-1]<<"\n";
    }
 




    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}