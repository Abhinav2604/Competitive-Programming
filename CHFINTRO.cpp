#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,r,i,a;
  cin>>n>>r;
  int arr[n]={ };
  for(i=0;i<n;i++)
  {
    cin>>a;
    if(a>=r)
      arr[i]=1;
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]==0)
      cout<<"Bad boi\n";
    else
      cout<<"Good boi\n";
  }
  return 0;
}
