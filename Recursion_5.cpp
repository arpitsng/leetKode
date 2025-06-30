#include<iostream>
using namespace std;

void merge(int* arr , int s , int e){
    int mid = s + (e-s)/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    //created 2 arrays
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainIndex = s;
    //copying values to array one
    for(int i = 0; i < len1 ; i++){
        arr1[i] = arr[mainIndex++];
    }
    mainIndex = mid +1 ;
    for(int i = 0; i < len2 ; i++){
        arr2[i] = arr[mainIndex++];
    }

    mainIndex = s ;
    int index1 = 0;
    int index2 = 0;
    //sorting and merging
    while(index1 < len1 && index2 < len2){
        if(arr1[index1] < arr2[index2]){
            arr[mainIndex++] = arr1[index1++];
        }
        else{
            arr[mainIndex++] = arr2[index2++];
        }
    }
    while(index1 < len1){
        arr[mainIndex++] = arr1[index1++];
    }
    while( index2 < len2){
        arr[mainIndex++] = arr2[index2++];
    }

    delete []arr1;
    delete []arr2;
}

void mergeSort(int* arr,int s,int e) {
    // Write your code here.
    //base case
    if(s>=e){
        return ;
    }

    int mid = s+(e-s)/2;

    //sort the left side
    mergeSort(arr,s,mid);

    //sort the right side
    mergeSort(arr,mid+1,e);

    //merging sorted arrays
    merge(arr , s , e);
}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}