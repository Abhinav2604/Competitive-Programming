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
	#ifndef ONLINE_JUDGE
	fio
	#endif
	int n,i;
	cin>>n>>i;
	long arr[n];
	FORA(x,arr) cin>>x;
	sort(arr,arr+n);
	double i2=i*8;
	i2/=n;
	i=pow(2,(floor(i2)));
	i-=1;
	int ans=n;
	for(int j=0;j<n;j++){
		int k=j;
		while(arr[k]-arr[j]<=i && k<n)
			k++;
		ans=min(ans,n-k+j);
	}
	cout<<ans;
}