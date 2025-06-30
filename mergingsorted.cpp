#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  //incomplete h abi.....krna h lekin
}

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0;//start of arr1
    int j=0;//start of arr2

    while(i<n && j<m){
       // if(arr1[i]<arr2[j]){ //jo chota h use insert krdo 3rd array me
         //   int temp = arr[i];
           // arr3[k]=arr1[i];
           // i++;
            //k++;
            //arr3[k++]=arr1[j++] ese bi likh skte h
        }
        else if(arr2[j]<arr1[i]){
            int temp=arr[j];
            arr3[k]=arr2[j];
            j++;
            k++;
            //arr3[k++]=arr1[j++] ese bi likh skte h
        }

    }

    //comparison k baad agr elemnts bache h or 
    //mtlv agr dono array ka size alg alg h to
    //compaarison to utne hi hoge jitna size h small array ka
    //to jo bda array h uske elements directly copy krdo
    //new array me

    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)
    {
        arr3[k++]=arr1[i++];
    }

}
int main(){

    int arr1[6]={7,8,13,99,100};
    int arr2[4]={2,3,8,11};
    int arr3[10];
    merge(arr1,6,arr2,4,arr3);
    printarr(arr3,10);
    return 0;
}