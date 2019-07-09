/*#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
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
	std::ios::sync_with_stdio(false);
   ll n,i,a,c=0;
   bool ch[100005];
   ll last[100005];
   ll diff[100005];

   cin>>n;
   for(i=1;i<=n;++i)
   {
     cin>>a;
     if(ch[a]) continue;
     if(last[a])
     { if(!diff[a])
         diff[a]=i-last[a];
       //bool[a]=true;
       else if(diff[a]!=(i-last[a]))
       {
         ch[a]=true;
         --c;
       }
     }
     else
		   ++c;
     last[a]=i;
   }

   cout<<c<<"\n";


   for(i=1;i<100001;++i)
       {
         if(last[i] && !ch[i])
         {
           cout<<i<<" "<<diff[i]<<"\n";
         }
       }

	return 0;
}*/
#include<cstdio>
using namespace std;
int a1[100001],a2[100001];
bool b1[100001];
int main() {
	int n,a,o=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		scanf("%d",&a);
		if(b1[a])continue;
		if(a1[a]) {
			if(!a2[a])a2[a]=i-a1[a];
			else if(a2[a]!=i-a1[a])
			{b1[a]=1;--o;}
		}
		else ++o;
		a1[a]=i;
	}
	printf("%d\n",o);
	for(int i=1;i<100001;++i)
	if(a1[i]&&!b1[i])
		printf("%d %d\n",i,a2[i]);
}
