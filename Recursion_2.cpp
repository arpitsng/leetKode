#include<iostream>
#include<string>
using namespace std;

void reachHome(int src, int des){
    //base case
    if(src == des){
        cout<<"Reached Home"<<endl;
        return ;
    }
    //Recursive case
    reachHome(src+1, des); //or scr++; reachHome(src, des);
}

int countDistinctWays(long long nStairs) {  //https://bit.ly/32VA96H
    //  Write your code here.

    //base case
    if(nStairs < 0){
        return 0;
    }

    if(nStairs == 0){
        return 1;
    }

    //recursive relation
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays( nStairs - 2);
    return ans;

}


int fib(int n) {  //https://leetcode.com/problems/fibonacci-number/
        //base case
        if( n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        // int small1 = fib(n-1);
        // int small2 = fib(n-2);

        // int big = small1 + small2;
        int ans = fib(n-1) + fib(n-2);

        return ans;
    }


 void SayDigit(int n, string arr[]){
    //base case
    if(n == 0){
        return ;
    }
    
    //processing
    int digit = n % 10;
    n = n/10;

    //Recursive case
    SayDigit(n, arr);

    cout<<arr[digit]<<" "<<endl;
 }
   

int main(){
    int src = 1;
    int des = 10;
    reachHome(src, des);

    string arr[8] = {"zero", "one", "two", "three" , "four" , "five" , "six"};
    SayDigit(123, arr);

    return 0;
}