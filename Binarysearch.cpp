#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){ 
    //key is the element we want to search

    int start = 0;
    int end = size -1;
    int mid = (start+end)/2; //mid = start+(end - start)/2 
                              //when the size of array is too large so 
                             //to not exceed the limit of integer we use this
    while(start<=end)   //considering array is in ascending order
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start = mid+1; //right me jaao
        }
        else
        {
           end = mid - 1; //left me jaao
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main(){

    int Evenarr[8]={1,2,3,4,5,6,7,8}; //size is odd or even 
    int oddarr[7]={1,3,5,7,9,11,13};
    int indexofeven=binarySearch(Evenarr,8,8);//finding 8
    int indexofodd=binarySearch(oddarr,7,11);//finding 11
    cout<<"index of key in even arrray is "<<indexofeven<<endl;
    cout<<"index of key in odd arrray is "<<indexofodd<<endl;

    return 0;
}
