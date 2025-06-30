#include<iostream>
using namespace std;
  // https://bit.ly/3Ioexjh 
int firstoccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;

}
int lastoccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;

}
int main(){

    int arr[12]={1,2,3,3,3,3,3,3,3,3,4,4};
    cout<<"index of first 3 is "<<firstoccurence(arr,12,3)<<endl;
        cout<<"index of last 3 is "<<lastoccurence(arr,12,3);

    return 0;
}