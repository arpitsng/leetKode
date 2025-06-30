#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

void BubbleSort(int arr[],int size){
    bool swapcounter;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcounter=true;
            }
        }
        if(swapcounter==0) //agr ek bi swap nhi hua...mtlv array phle hi sorted h
        {                 // to loop se bhar aajao or mt kro aage kuch
             break;
        }

    }

}
int main(){
    int arr[]={22,44,2,1,78,77};
    BubbleSort(arr,6);
    printarray(arr,6);
    
    return 0;

}