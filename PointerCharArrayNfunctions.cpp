#include<iostream>
using namespace std;

int main(){

    char ch[6] = "abcde" ; //char array of size 6
    char *cptr = &ch[0] ; //charachter pointer

    cout<<"ch: "<<ch<<endl; //so unlike integer array it prints 
    //the whole chareacter array instead of address of first block

    cout<<"cptr: "<<cptr<<endl;
    //so functionality of cout function is different for character array
    //cout<<arr<<arrayPointer  ... prints address of first memory block
    //cout<<ch<<cptr ... prints the whole array

//FUNCTIONS  

    // int function(arr[],int size){ //so this arr[] is an pointer 
    //which is equal to  *arr
    //arr[] = *arr in function
    //int function2(int *Arr, int n)
    //both fintions means the same 

    //     cout<<arr[0];  
    // }
//FUNCTION CALL
    //int main(){
    //int arr[5]={2,3,4,5,6};
    //function(arr + 1 , 5) //here we are passing a part of array in which
    //array will start from position one {3,4,5,6} 
        //OR
    //function(arr + 2) //part of array 
    //in which array is {4, 5, 6} 
    //}
    return 0;
}