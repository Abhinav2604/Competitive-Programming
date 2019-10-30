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
bool sortinrev(const pair<ll,ll> &a,  
               const pair<ll,ll> &b) 
{ 
       return (a.first > b.first); 
} 

int main()
{
    fast;
   // fio;
    ll n,m,k,a,b;
    vector<unsigned long long> table;
    table.push_back(1);
    table.push_back(2);
    for(ll i=2;i<65;i++)
    {
    	table.push_back((2LL)*table[i-1]);
    }
    cin>>n>>m;
    ll c=(n*(n+1))/2;
    map<ll,ll> myMap;
    bool tt=true;
    vector<ll>degree(n+1,0);
    set<ll> taken;
    for(ll i=0;i<m;i++)
    {
    	cin>>a>>b;
    	degree[a]++;
    	degree[b]++;
    	if(myMap.find(a)==myMap.end())
    	{
    		myMap[a]=c-(a+b);
    	}
    	else
    		myMap[a]+=b;
    	if(myMap.find(b)==myMap.end())
    	{
    		myMap[b]=c-(a+b);
    	}
    	else
    		myMap[b]+=a;

    	if(myMap[a]==0 || myMap[b]==0)
    		tt=false;
    }
     vector<pair<ll,ll>> deg;

    for(ll i=1;i<=n;i++)
    {
    	deg.push_back(make_pair(degree[i],i));
    }
    for(ll i =0;i<65;i++)
    {
    	if(table[i]>=n)
    	{
    		k=i;
    		break;
    	}
    }
   c=(n*(n-1))/2;
   c=c-(n/2);
    if(k*n>1000000)
    	cout<<-1;
    else if(k==((n*(n-1))/2))
    {
    	cout<<k<<"\n";
    	for(ll i=0;i<k;i++)
    	{  ll j=0;
    		ll o=1;
    		while(j<n)
    		{
              cout<<o;
              if(j%table[i]==0)
              {
              	if(o==0)
              		o=1;
              	else
              		o=0;
              }
              j++;
    		}
    		cout<<"\n";
    	}
    }
    else if(m<c || m>((n*(n-1))/2) ||  tt )
    {
         cout<<-1;
    }
    else
    {      
    	   sort(deg.begin(),deg.end(),sortinrev);
           cout<<k<<"\n";
           ll d=(n+1)/2;

           for(ll p=0;p<n;p++)
            {  if(taken.size()>d)
            		break;
            		
                if(myMap[deg[p].second]!=0)
            		{   if((d-taken.size())<2)
                            break;
                        taken.insert(deg[p].second);
            			taken.insert(myMap[deg[p].second]);
            		}
            	else
            	    {
            			taken.insert(deg[p].second);
            		}
            }
           for(ll i=0;i<k;i++)
           {  
            
            		for(ll j=0;j<n;j++)
            		{
            			if(taken.find(j+1)==taken.end())
            				cout<<0;
            			else
            				cout<<1;
            		}
            		cout<<"\n";
            		if(i==(k-1))
            			break;
                    set<ll> taken_2,taken_3;
                    ll y=taken.size();
                    ll b=(y+1)/2;
                    ll r=(n-y+1)/2;
                    for(ll j=0;j<n;j++)
                    {
                         if(taken.find(deg[j].second)==taken.end())
                         {  ll z=0;
                         	deg[j].first=max(z,deg[j].second-y);
                         	if(myMap[deg[j].second]!=0)
                         	{
                         		if((b-taken_2.size())>=2)
                         		{
                         			taken_2.insert(deg[j].second);
                         			taken_2.insert(myMap[deg[j].second]);
                         		}
                         	}
                         	else if((b-taken_2.size())>=1)
                         	{
                         		taken_2.insert(deg[j].second);
                         	}

                         }
                         else
                         { ll z=0;
                         	deg[j].first=max(z,deg[j].second-y);
                         	if(myMap[deg[j].second]!=0)
                         	{
                         		if((r-taken_3.size())>=2)
                         		{
                         			taken_3.insert(deg[j].second);
                         			taken_3.insert(myMap[deg[j].second]);
                         		}
                         	}
                         	else if((r-taken_3.size())>=1)
                         	{
                         		taken_3.insert(deg[j].second);
                         	}

                         }


                    }
                    taken.clear();
                    for(auto it=taken_2.begin();it!=taken_2.end();it++)
                    {
                    	taken.insert(*it);
                    }
                    for(auto it=taken_3.begin();it!=taken_3.end();it++)
                    {
                    	taken.insert(*it);
                    }
                    sort(deg.begin(),deg.end(),sortinrev);

            	
           }
    }


    
    return 0;
}