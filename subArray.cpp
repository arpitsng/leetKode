#include<iostream>
using namespace std;

int SubArray(int arr[],int size){

    for(int start=0;start<size;start++){
        for(int end=0;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
       
    }
return 0;
}

int main(){
    int arr[5]={1,2,3,4,5};
    SubArray(arr,5);
    return 0;
}