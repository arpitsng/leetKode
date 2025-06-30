#include<iostream>
using namespace std;
void printarray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}


void SelectionSort(int arr[],int size){
    int minindex;
    for(int i=0;i<size-1;i++){
        minindex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
     swap(arr[minindex],arr[i]);
    }
  
}
int main(){
    int arr[]={22,44,2,1,434,77};
    SelectionSort(arr,6);
    printarray(arr,6);
    
    return 0;

}