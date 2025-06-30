#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void moveZeros(int arr[],int n){ //sare zeros ko last me daalo
    int nonZeroIndex=0; //non zero value ko sbse phle laao
    int j=0; //loop k liye starting index
    while(j<n){
        if(arr[j]!=0){
            swap(arr[nonZeroIndex],arr[j]);
            nonZeroIndex++;
        }
        j++;
    }
}

int main(){

    int arr[6]={0,0,33,2,0,1};
    moveZeros(arr,6);
    printarr(arr,6);

return 0;
}