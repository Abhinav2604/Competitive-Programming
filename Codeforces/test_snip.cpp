#include <bits/stdc++.h> 
#include <boost/algorithm/cxx11/all_of.hpp> 
using namespace std; 
  
// Drivers code 
int main() 
{ 
  
    // Declares the sequence with 
    // 5 length and all elements as 1 
    // [1, 1, 1, 1, 1] 
    vector<int> c(5, 1); 
  
    // Run the function 
    bool ans 
        = boost::algorithm::all_of_equal(c, 1); 
  
    // Condition to check 
    if (ans == 1) 
        cout << "ALl elements are 1"; 
    else
        cout << "All elements are not 1"; 
    return 0; 
} 