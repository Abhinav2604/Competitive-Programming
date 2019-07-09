#include<iostream>
using namespace std;
int main()
{
  long int t,i,k,p,q,r;
  cin>>t;
  int arr[t];
  for(i=0;i<t;i++)
  {
    cin>>p>>q>>k;
    r=(p+q)/k;
    arr[i]=r%2;
  }
  for(i=0;i<t;i++)
  {
    if(arr[i]==0)
    cout<<"CHEF"<<endl;
    else
    cout<<"COOK"<<endl;
  }
  return 0;
}
