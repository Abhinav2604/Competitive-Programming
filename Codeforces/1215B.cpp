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
	//fio
	int n;
	cin>>n;
	long arr[n];
	FORA(x,arr)
		cin>>x;
	int dp[2][n];
	ll neg=0,pos=0;
	if(arr[n-1]>0){
		dp[0][n-1]=1;
		dp[1][n-1]=0;
		pos++;
	}
	else{
		dp[0][n-1]=0;
		dp[1][n-1]=1;
		neg++;
	}
	for(int i=n-2;i>=0;i--){
		if(arr[i]>0){
			dp[0][i]=dp[0][i+1]+1;
			dp[1][i]=dp[1][i+1];
		}
		else{
			dp[0][i]=dp[1][i+1];
			dp[1][i]=dp[0][i+1]+1;
		}
		pos+=dp[0][i];
		neg+=dp[1][i];
	}
	cout<<neg<<' '<<pos;
}