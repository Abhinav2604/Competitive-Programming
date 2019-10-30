#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define ll long long
#define mod1 1000000007
using namespace std;
int bt(int no[],int n,pair<int,int> p[],int m,int nm){
	if(n==nm){
		int ctr=0;
		bool mat[6][6];
		memset(mat,0,sizeof(mat));
		for(int i=0;i<m;i++){
			int a=no[p[i].first];
			int b=no[p[i].second];
			int c=min(a,b);
			int d=max(a,b);
			if(mat[c][d]==0){
				mat[c][d]=1;
				ctr++;
			}
		}
		return ctr;
	}
	int ans=-100;
	for(int i=0;i<6;i++){
		no[n]=i;
		int x=bt(no,n+1,p,m,nm);
		//cout<<n<<' '<<x<<endl;
		ans=max(ans,x);
	}
	return ans;
}
int main(){
	fastio
	//fio
	int n,m,x,y;
	cin>>n>>m;
	pair<int,int> p[m];
	FOR(i,0,m){
		cin>>x>>y;
		x-=1;
		y-=1;
		p[i].first=min(x,y);
		p[i].second=max(x,y);
	}
	int no[n];
	x=bt(no,0,p,m,n);
	if(x==-100)
		cout<<0;
	else
		cout<<x;
 
}