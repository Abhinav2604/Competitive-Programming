int Solution::maxPoints(vector<int> &A, vector<int> &B) {

    int n=0;
    n=A.size();
    if(n<=1)
     {return n;}
    int i,j,k;
    long double slope=0.0;

    unordered_map<long double,unordered_set<int>> hash;
    long int m=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            slope=0.0;
            if(B[i]!=B[j])
            slope=slope+(long double)((long double)(A[j]-A[i])/(long double)(B[j]-B[i]));
            else
              {slope=INT_MAX;}

        // cout<<slope<<"i ";

            hash[slope].insert(i);
             hash[slope].insert(j);
            // cout<<"\n"<<hash[slope].size()<<"\n";
             if((hash[slope].size())>m)
                {m=hash[slope].size();
                   //cout<<slope<<" "<<i<<"\n";
                }

        }
    }

    return m;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


int n=A.size();
   int i=0,j=0;
   vector<int> res;
   vector<int> hea;
   hea.clear();
   if(n<=0)
     return res;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           hea.push_back(A[i]+B[j]);
       }
   }
   make_heap(hea.begin(),hea.end());
   res.clear();
   for(i=0;i<n;i++)
   {
       res.push_back(hea.front());
     //  cout<<hea.front()<<" ";
       pop_heap(hea.begin(),hea.end()-i);
      // cout<<hea.size()<<"\n";
   }

   return res;
