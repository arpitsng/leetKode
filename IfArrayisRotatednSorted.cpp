#include<iostream>
using namespace std;

bool checkRotatedNsorted(int arr[],int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
        if(arr[n-1]>arr[0]){
            count++;
        }
    }
    return count<=1;
}

int main(){

    int arr[4]={3,4,1,2};
    cout<<"it is "<<checkRotatedNsorted(arr,4)<<endl;
    return 0;

}