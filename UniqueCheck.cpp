#include<iostream>
using namespace std;
bool uniqueCheck(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count==1){
            cout<<arr[i]<<" ";
            }
           count =0;
        }
    }
    
}
int main(){
    int arr[4]={1,2,2,2};
    uniqueCheck(arr,4);
    return 0;
}