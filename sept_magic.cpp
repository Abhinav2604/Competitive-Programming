#include<iostream>
using namespace std;

int main()
{
  int t,n,s,x,i,j,k,a,b,temp;
  t=0;i=0;
 cin>>t;
 i=t-1;
 int arr[t-1];
 for(;i>=0;i--)
 {
   cin>>n>>x>>s;
   arr[i]=x;
   for(j=s;j>0;j--)
   {
     cin>>a>>b;
     if(a==arr[i])
         arr[i]=b;
     else if(b==arr[i])
      arr[i]=a;
   }
 }
 for(j=t-1;j>=0;j--)
 {
   cout<<arr[j]<<"\n";
 }
 return 0;
}
