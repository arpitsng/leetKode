#include<iostream>
using namespace std;

void Print(int arr[] , int n , int start= 0) { //start is default argument 
//if we give a value here in funtion then well n good otherwise it'll take 0 as default value 

    for(int i =start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Print(arr,n); //start from 0 we can set default to 1 2 3 anything not just 0
    cout<<endl;
    Print(arr,n,1);   //start from 1
 return 0;

} // RIGHT TO LEFT  
//if we want to make more defalut areguments in function we have to move from right to left
//if right most arg is default only then we can make left arg as default 
//otherwise it'll throw an error

// void(int a, int b = 1, int c){

// }  this cant be done we have to do this instead 

//void(int a, int b = 1, int c =5){

// } 