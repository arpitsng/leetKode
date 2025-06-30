#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void revarr(int arr[],int n){

    int i=0;
    int j=n-1;
    while(j<=i){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){

    int arr[5]={1,2,3,4,5};
    revarr(arr,5);
    printarr(arr,5);
    return 0;
}