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
#define MAXN 1000001
using namespace std;
ll spf[MAXN]; 
vector<ll> factorR;


vector<ll> prime;
//unordered_map<ll,vector<ll>> till_n_3;

  
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
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

    for(ll i=2;i<MAXN;i++)
    {
    	if(spf[i]==i)
    		prime.push_back(i);
    }

}
void findFactor(vector<ll> &pri,vector<ll> &co,ll currenDiv,ll currRes)
{
	if(currenDiv==pri.size())
	{
        factorR.push_back(currRes);
       // cout<<currRes<<"i ";
        return ;
	}
	for(ll i=0;i<=co[currenDiv];i++)
	{
		findFactor(pri,co,currenDiv+1,currRes);
		currRes=currRes*pri[currenDiv];
		//cout<<"poio\n";
	}
} 
void getFactorization(ll x)
{
	vector<ll> pri;
	vector<ll> co;
	ll c=0;
	ll j=0;
	ll k,m,n;
	for(ll i=prime[j];i<MAXN && x>1;i=prime[j])
	{   c=0;
		
		if((x%i)==0)
		{ 
			pri.push_back(i);
			while((x%i)==0)
			{ 
				x=x/i;
				c++;
			}
			co.push_back(c);
			//cout<<c<<"op ";
		}
		j++;
	}
factorR.clear();
ll d=0;
ll r=1;
	findFactor(pri,co,d,r);
}
ll findXor(ll n)
{   ll k=0;
	ll ans=0;
	getFactorization(n);
	for(ll i=0;i<factorR.size();i++)
	{  
		ans=(ans^factorR[i]);
	}
	return ans;
}

int main()
{
    fast;
   // fio;
    sieve();
    ll t,n;
    cin>>t;
    rep(i,t)
    {
    	cin>>n;
    	cout<<findXor(n)<<"\n";


    }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}