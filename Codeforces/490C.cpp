/*#include <bits/stdc++.h>

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
    //cout<<"ababa\n";
    string s,aa,bb;
    ll a,b,i,j;
    ll num=0;
    i=0;
      cin>>s>>aa>>bb;
      cout<<s<<"\n";
      cout<<aa<<"i\n";
      cout<<bb<<"p\n";

     a=b=0;
     while(i<aa.size());
     {
     	a=a*10 + (aa[i]-'0');
     	i++;
     }
     i=0;
     while(i<bb.size())
     {
     	b=b*10 +(bb[i]-'0');
     	i++;
     }
    i=0;
    ll n=s.size();
    j=n-1;
    vector<ll> A(n,0);
    vector<ll> B(n,0);
    while(num<a && i<n)
    {
         num=num*10 + (s[i]-'0');
         A[i]=(num%a);
         i++;
    }
    ll ten=1;
    if(i==n-1)
    {   cout<<"p\n";
    	cout<<"NO";
    	return 0;
    }

    num=0;
    while(num<b && j>0)
    {
    	num=(s[j]-'0')*ten +num;
    	//cout<<num<<"\n";
        B[j]=num%b;
    	ten=10*ten;
    	j--;
    }
    if(j==0)
    {  cout<<"pp\n";
    	cout<<"NO";
    	return 0;
    }

    if((aa.size()+bb.size())>n)
    {cout<<"pppp\n";
    	cout<<"NO";
    	return 0;
    }

    for(;i<n;i++)
    {  if(s[i]=='0')
		{  while(s[i]=='0' && i<n)
     	 A[i]=A[i-1];
     	 i++;
		}
		else if(i<n)
       	 A[i]=((A[i-1]*10)%a + (s[i]-'0')%a)%a;
    }
    ll t=1;
    ll prev=ten%b;
    for(;j>=0;j--)
    {
       B[j]=  ((((s[j]-'0')%b)*(prev*t)%b)%b + B[j+1])%b;
       if(t>ten)
       {
       	prev=(prev*t)%b;
       	t=1;
       }
       else
       	t=t*10;
    }
  /*for(i=0;i<(n-1);i++)
  {
  	if(A[i]==0 && B[i+1]==0)
  	{
  		cout<<"YES";
  		return 0;
  	}
  }*/
/*   cout<<"NO";



    return 0;
}
*/

#include<bits/stdc++.h>
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

using namespace std;
char s[1000001];
bool b1[1000000];
int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	fio;
	int n,a,b,c,d;
	scanf("%s%d%d",s,&a,&b);
	n=strlen(s);c=0;
	for(int i=0;i<n;++i)
		{b1[i]=(c=(c*10+s[i]-48)%a)||s[i+1]==48;
		

		}
	c=0;d=1;
	for(int i=n-1;i;--i,d=10*d%b)
	if(!(c=(c+(s[i]-48)*d)%b)&&!b1[i-1])
		return printf("YES\n%.*s\n%s",i,s,s+i),0;
	puts("NO");
}