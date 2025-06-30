#include<iostream>
using namespace std;

void sort(int arr[],int n){
  //  int arr1[n];
    int count=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        if(arr[i]==1)
        {
            arr[count]=arr[i];
            count=count -1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){

    int arr[6]={0,0,1,1,0,1};
    sort(arr,6);
    return 0;
}