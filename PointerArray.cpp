#include<iostream>
using namespace std;

int main(){

    //pointer arrays; 

    //arr = &arr = &arr[0]
    int arr2[3]= {1,2,3};
    int* p = arr2;
    cout<<p[2]<<endl<<endl; //p[2] = arr[2] = *(p + 2) = value at +2 index

    int arr[10] = {2,3,4};

    cout<<"address of first memory block: "<<arr<<endl;
    cout<<"address of first memory block: "<<&arr[0]<<endl;
    cout<<"value at first location: "<<*arr<<endl;
    cout<<"value at 2nd location: "<<*(arr+1)<<endl;
    
    //formula***** arr[i] = *(arr + i )  *** for values
    //formula***** i[arr] = *(i + arr)  //it is a valid stmt not...error
    //arr[i] == i[arr]  //these are equal coz of above fromula

    int i = 2 ;
    cout<<"value with arr[i]: "<<arr[i]<<endl;
    cout<<"value with i[arr]: "<<i[arr]<<endl;

    cout<<"increment of first value by pointer * "<<*arr + 1<<endl;
   cout<<"adress will be incremented a one integer: "<<arr+1<<endl;
   cout<<"size of array: "<<sizeof(arr)<<endl;

    int temp[10]={0};
    int *ptr = &temp[0];
    cout<<"size of array: "<<sizeof(temp)<<endl;
    cout<<"size of array pointer: "<<sizeof(ptr)<<endl;
    cout<<"size of ch: "<<sizeof(char)<<endl;
    
    char ch;
    char *chptr = &ch;

    cout<<"size of char pointer: "<<sizeof(chptr)<<endl;

    //so size of every pointer will be 4 on this computer architectur 
    //can change as per different architecture
    //but size of pointer will be same not matter what the datatype is ;

    //address cannot be changed 
    int arr[20]={0};
    int *ptr = &arr[0];
    //arr++ or arr= arr+1 will guve error

    //arr means address of first memory blick
    //but if we do ptr = ptr + 1 it'll point to or jump to 1 integer block

//ERROR
    //arr = arr + 1

//VALID
    //ptr = ptr + 1



return 0;
}