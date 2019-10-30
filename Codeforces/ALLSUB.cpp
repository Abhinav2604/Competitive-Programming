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
    ll t;
    string tt="abcdefghijklmnopqrstuvwxyz";
    cin>>t;
    for(ll i=0;i<t;i++)
    {  string s,r;
    	cin>>s>>r;
    	bool lli=true;
    	ll arrs[26]={};
    	ll arrr[26]={};
    	for(ll j=0;j<s.size();j++)
    	{
               ++arrs[s[j]-'a'];
    	}
    	for(ll j=0;j<r.size();j++)
    	{
    		++arrr[r[j]-'a'];
    	}
    	if(r.size()<s.size())
    	{
    		cout<<"Impossible\n";
    	}
    	else
    	{
            for(ll j=0;j<26;j++)
            {
            	if(arrr[j]<arrs[j])
            	{
            		cout<<"Impossible";
            		lli =false;
            		break;
            	}

            }
            if(lli)
            	{
            		for(ll j=0;j<26;j++)
            		{
            			arrr[j]=arrr[j]-arrs[j];
            		}
            		for(ll j=0;j<26;j++)
            		{
            			if(j<(s[0]-'a'))
            			{
            				ll k=arrr[j];
            				for(ll o=0;o<k;o++)
            					cout<<tt[j];
            			}
            			else if(j==(s[0]-'a'))
            			{
            				ll k=arrr[j];
            				if(k==0)
            					cout<<s;
            				else
            				{ ll u=0;
            					for( u=0;u<s.size();u++)
            					{
            						if(s[0]!=s[u])
            							break;
            					}
            					if(u==s.size())
            					{
            						cout<<s;
            						for(ll o=0;o<k;o++)
            					       cout<<tt[j];
            					}
            					else
            					{
            						if((s[u]-'a')<j)
            						   {
            						   	cout<<s;
            						   	for(ll o=0;o<k;o++)
            					       cout<<tt[j];
            						   }
            						   else
            						   {

            						   	for(ll o=0;o<k;o++)
            					       cout<<tt[j];
            					   cout<<s;
            						   }
            					}
            				}

            			}
            			else
            			{
            				ll k=arrr[j];
            				for(ll o=0;o<k;o++)
            					cout<<tt[j];
            			}
            		}
            	}


            	cout<<"\n";
    	}

    }


    
    return 0;
}