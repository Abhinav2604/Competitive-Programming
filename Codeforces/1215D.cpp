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
int main(){
	fastio
	fio
	ll n;
	cin>>n;
	char s;
	ll nine=9;
	ll lsum=0,rsum=0,el=0,er=0;
	for(int i=0;i<n/2;i++){
		cin>>s;
		if(s=='?')
				el++;
		else
			lsum+=(s-48);
	}
	for(int i=n/2;i<n;i++){
		cin>>s;
		if(s=='?')
				er++;
		else
			rsum+=(s-48);
	}
	if(lsum>rsum && el>er || (lsum<rsum && el<er))
		cout<<"Monocarp";
	else if(abs(lsum-rsum)==abs(el-er)/2*9)
		cout<<"Bicarp";
	else
		cout<<"Monocarp";
}