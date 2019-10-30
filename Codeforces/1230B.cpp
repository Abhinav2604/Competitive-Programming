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
 // fio
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  if(n==1){
    if(k!=0)
      cout<<'0';
    else
      cout<<s;
    return 0;
  }
  for(int i=0;i<n && k>0;i++){
    if(i==0 && s[i]!='1'){
      s[i]='1';
      k--;
    }
    if(i!=0 && s[i]!='0'){
      s[i]='0';
      k--;
    }
  }
  cout<<s<<endl;
}
