//optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int zor = 0;
        int n = arr.size();
        
        //calculate zor for the first window
        for(int i=0; i<k; i++){
            zor ^= arr[i];
        }
        
        int maxi = zor;
        
        for(int i=k; i<n ; i++){
            zor = zor ^ arr[i-k] ^ arr[i];
            maxi = max(zor, maxi);
        }
        
        return maxi;
        
    }
};

//time complexity: O(n)
//space complexity: O(1)
