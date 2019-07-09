#include<iostream>
using namespace std;
void heapify(long int arr[],long  int n,long int i)
{
    long int largest = i;
    long int l = 2*i + 1;
  long int r = 2*i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(long int arr[], long int n)
{

    for (long int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for (long int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


long int Bsearch(long int Arr[],long int l,long int k)
{ long int i,m;
  if(k>l)
   return -1;
     m=Arr[l-k+1];
          for(i=l-k+1;i>=0;--i)
          {
            if((Arr[i]<m))
              {  return i;}
           }
           return -1;
  }

int main()
{
  int t,i;
  long int k,n,a;
  cin>>t;
  long int team[t];
  for(i=0;i<t;i++)
  {
    cin>>n>>k;
    long int  S[n];
    for(long int j=0;j<n;j++)
      {  cin>>S[j];}
    heapSort(S,n);
   team[i]=n-1-Bsearch(S,n-1,k);
  }
   for(i=0;i<t;i++)
    {
      cout<<team[i]<<endl;
    }
    return 0;
}
