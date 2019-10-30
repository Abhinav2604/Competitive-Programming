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
#define lim 1000000000000
using namespace std;
long long power[37][41];
map<char,ll> conv;
void calc()
{
	for(ll i=2;i<=36;i++)
	{  ll val=1;
		for(ll j=0;j<=40 && val<=lim;j++)
		{
              power[i][j]=val;
              val=val*i;
		}
	}
     /*for(ll i=2;i<=36;i++)
     {
     	for(ll j=0;j<=10;j++)
     		cout<<power[i][j]<<"\t";
     	cout<<"\n";
     }*/
	for(ll i=0;i<=9;i++)
    	 conv[(char)(i+'0')]=i;
    for(ll i=0;i<=25;i++)
    	conv[(char)('A'+i)]=10+i;

    /*for(auto it=conv.begin();it!=conv.end();it++)
    	cout<<it->first<<" "<<it->second<<"\n";*/
}

int main()
{
    fast;
    //fio;
    calc();
   ll t,b,n;
   string str;
   cin>>t;
   rep(i,t)
   {
   	cin>>n;
   	set<ll> my_set;
   	ll val=0;
   	bool f=1;
   	rep(j,n)
   	{
   		cin>>b>>str;

   		reverse(str.begin(),str.end());
   		if(b==-1 && f==1)
   		{
           ll base=0;
          // cout<<str<<"op\n";
           for(ll k=0;k<str.size();k++)
           {
           	base=max(base,conv[str[k]]);
           //	cout<<k<<" "<<conv[str[k]]<<" "<<str[k]<<"\n";
           }
         //  cout<<base<<"\n";
           base=base+1;
         //  cout<<base<<"\n";
         //  cout<<str<<"\n";
           val=0;
           set<ll> curr;
           for(ll k=base;k<=36 && val<lim;k++)
           {      val=0;
                  for(ll m=0;m<str.size();m++)
                  	{val=val+(conv[str[m]]*power[k][m]);
                  	  //cout<<conv[str[m]]<<" "<<str[m]<<" "<<power[k][m]<<" "<<val<<"\n";
                  	}
                 // cout<<val<<" "<<k<<" "<<j<<"\n";
                  if(j==0 && val<lim)
                  {
                  	curr.insert(val);
                  }
                  else if(val<lim)
                  {
                  	if(my_set.find(val)!=my_set.end())
                  		curr.insert(val);
                  }
           }

           my_set=curr;
           if(my_set.size()==0)
           	  f=0;

   		}
   		else if(f==1)
   		{    val=0;
   			 for(ll m=0;m<str.size();m++)
                  	val=val+conv[str[m]]*power[b][m];
             if(j==0 && val<lim)
             	my_set.insert(val);
             else if(val<lim)
             {
             	if(my_set.find(val)!=my_set.end())
             	{
             		my_set.clear();
             		my_set.insert(val);
             	}
             }
             if(my_set.size()==0)
           	  f=0;
   		}

   		
   	}
   	if(f==0)
   			cout<<-1<<"\n";
   	else
   			cout<<*(my_set.begin())<<"\n";
   }


    cerr << "Time elapsed: " << clock() / (double)CLOCKS_PER_SEC << endl;
    return 0;
}