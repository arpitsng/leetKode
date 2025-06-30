#include<iostream>
using namespace std;
int print(int arr[],int size){
    for (int j=0;j<size; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}

int swaper(int arr[],int size){
    for (int i=0;i<size; i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]); // int temp=arr[i];
        }                      //arr[i]=arr[i+1];       //this is swap    
    }                          //arr[i+1]=temp
    print(arr,size);
    
return 0;
}
int main(){
    int arr[5]={1,2,3,4,5}; //works for both odd n even arrays
    swaper(arr,5);
    return 0;
}