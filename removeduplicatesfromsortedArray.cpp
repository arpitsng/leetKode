#include<iostream>
using namespace std;

int removeduplicates( int arr[] , int n){

    int i = 0;
    for( int j = 1; j< n; j++){
        if( arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    return arr.size(); //since we use vector here
}