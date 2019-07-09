#include<bits/stdc++.h>
using namespace std;
void partition(long int a[],long int l, long int r,long int &i,long int &j)
{
    i = l-1, j = r;
    long int p = l-1, q = r;
    long int v = a[r];

    while (true)
    {

        while (a[++i] < v);

        // From right, find the first element smaller than or
        // equal to v
        while (v < a[--j])
            if (j == l)
                break;

        // If i and j cross, then we are done
        if (i >= j) break;

        // Swap, so that smaller goes on left greater goes on right
        swap(a[i], a[j]);


        if (a[i] == v)
        {
            p++;
            swap(a[p], a[i]);
        }

        // Move all same right occurrence of pivot to end of array
        // and keep count using q
        if (a[j] == v)
        {
            q--;
            swap(a[j], a[q]);
        }
    }

    // Move pivot element to its correct index
    swap(a[i], a[r]);


    j = i-1;
    for (long int k = l; k < p; k++, j--)
        swap(a[k], a[j]);


    i = i+1;
    for (long int k = r-1; k > q; k--, i++)
        swap(a[i], a[k]);
}

// 3-way partition based quick sort
void quicksort(long int a[],long int l,long int r)
{
    if (r <= l) return;

    long int i, j;

    // Note that i and j are passed as reference
    partition(a, l, r, i, j);

    // Recur
    quicksort(a, l, j);
    quicksort(a, i, r);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,j=0;
cin>>n;
long int child[n];
long int arr[n]={ };
for(int i=0;i<n;i++)
{
  cin>>child[i];
}

quicksort(child,0,n-1);

for(int i=0;i<n;i=i+2,j++)
{
   arr[j]=child[i];
   if((i+1)<n)
   {
     arr[n-1-j]=child[i+1];
   }
}
for(int i=0;i<n;i=i+1)
{
  cout<<arr[i]<<" ";
}
return 0;
}
