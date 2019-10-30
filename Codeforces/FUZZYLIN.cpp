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
#define MAXN   1000001 
using namespace std;
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

  
// stores smallest prime factor for every number 
ll spf[MAXN]; 

unordered_set<ll> divisorsss;
vector<ll> prime_100;
//unordered_map<ll,vector<ll>> till_n_3;
vector<ll> factorR;

  
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

    for(ll i=2;i*i*i<=1000000;i++)
    {
    	if(spf[i]==i)
    		prime_100.push_back(i);
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
{  vector<ll> pri;
	vector<ll> co;
	ll c=0;
	ll j=0;
	ll k,m,n;
	for(ll i=prime_100[j];i*i*i<=x,j<prime_100.size();i=prime_100[j])
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
	if(x!=1)
	{
       k=x;
      // cout<<x<<"ggu  ";
       if(spf[x]==k)
       {
       	pri.push_back(k);
       	co.push_back(1);
       }
       else
       {
       m=spf[x];
       n=spf[x/m];
       if(m==n)
       {
       	pri.push_back(m);
       	co.push_back(2);
       }
       else
       {
       	pri.push_back(m);
       	pri.push_back(n);
       	co.push_back(1);
       	co.push_back(1);
       }
       }
	}
factorR.clear();
ll d=0;
ll r=1;
findFactor(pri,co,d,r);
	
} 



int main()
{
    fast;
   // fio;
    sieve();
    ll n,q;
    cin>>n;
    vector<ll> vec(n,0);
    for(ll i=0;i<n;i++)
    {
    	cin>>vec[i];
    }
//cout<<gcd(6,7)<<" "<<gcd(2,7)<<"\n";
     map<ll,ll> m1,m2,m3;
    ll new_gcd;
    m1[vec[0]]++;
    m2[vec[0]]++;
    for(ll i=1;i<n;i++)
    {
    	 
    	 for(auto it=m1.begin();it!=m1.end();it++)
    	 {
    	 	new_gcd=gcd(it->first,vec[i]);
    	 	m2[new_gcd]=m2[new_gcd]+(it->second);
    	 	m3[new_gcd]=m3[new_gcd]+(it->second);
    	 }
    	 m1.clear();
    	 m1=m3;
    	 m3.clear();
    	 m1[vec[i]]++;
    	 m2[vec[i]]++;
    }
   
  //  cout<<"\n";

 /*   for(ll i=0;i<prime_100.size();i++)
    {
    	cout<<prime_100[i]<<" ";
    }
    cout<<"ooooooooooooooooooo\n";*/
    cout<<"\n";
    cin>>q;
   ll k,res=0;
   for(ll i=0;i<q;i++)
   {
   	cin>>k;
res=0;

  if(k==1)
 {
 	res=m2[1];
 	cout<<res<<"\n";
 	continue;
 }
 getFactorization(k);
 //cout<<"io\n";  
 for(ll j=0;j<factorR.size();j++)
 {      //cout<<factorR[j]<<" ";
          res=res+m2[factorR[j]];
 }
 //cout<<"\n";
 cout<<res<<"\n";
}




    
    return 0;
}