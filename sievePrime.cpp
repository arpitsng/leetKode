#include<iostream>   //https://leetcode.com/problems/count-primes/description/
#include<vector>
//t(n) n(log(logn))

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        
        int count =0;
        vector <bool> prime(n+1 , true) ;//bool array of size n+1 and marked all values as true..
        prime[0] = prime[1] = false ; //bs ye dono value false h ..initialy !!

        for(int i=2; i<n; i++){  
            if(prime[i]==true){
                count++;
                for(int j=i*i; j<n; j=j+i ){ //in this question instead of giving int j we have to give long so that it does'nt cross the integer range and prevent it from causing integer range overflow
                 //for(long long j=(long long )i*i; j<n; j=j+i )
                    prime[j] = false ; //jo no. prime h uske sare multiple ko discard krdo ya fir uski value ko false mark krdo;
                }
            }
        }
        return count;
    
    }
};