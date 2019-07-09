#include<iostream>
using namespace std;
int n,k,i;
main(){
cin>>n>>k;
if(k==n)
cout<<-1;
else{
cout<<n-k<<" ";
for(i=1;i<=n;i++){
if(i!=n-k)
cout<<i<<" ";}}}
