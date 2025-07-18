#include<iostream>
#include<deque>

using namespace std;

int solve(int arr[], int n, int k){

    deque<int> maxi(k);
    deque<int> mini(k); //of k size

    //for the first window
    for(int i=0; i<k; i++){

        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

    }

    int ans = 0;
    
    ans += arr[maxi.front()] + arr[mini.front()];


    //for remaining window
    for(int i=k; i<n; i++){

        //next windows 

        //removal
        while(!maxi.empty() && i-maxi.front() >= k){
            maxi.pop_front();
        }

        while(!mini.empty() && i-mini.front() >= k){
            mini.pop_front();
        }


        //addition
        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        ans += arr[maxi.front()] + arr[mini.front()];
    }
     return ans;
}


int main(){
    int arr[]= {2, 5, -1, 7, -3, -1, -2};
    int n = 7;
    int k = 4;

    cout<<solve(arr, n, k);

}
