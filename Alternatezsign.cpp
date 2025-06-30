#include<iostream>
using namespace std;
#include<vector>

void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
}

void alternate(vector<int> &arr){
    vector<int> pos;
    vector<int> neg;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(arr[i]>0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    for(int i=0; i<n/2; i++){
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }

   // return arr;
}

int main(){
   vector<int> arr = {-2, 3,3,-4,-2,5};
   alternate(arr);
    print(arr);
}