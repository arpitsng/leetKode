#include<iostream>
using namespace std;

int main(){
    
    int num =99;
    int *ptr = &num; //ptr stores address of num
    double d = 4.33;
    double *dptr = &d; //dptr stores address of d
    //int *p; //uninitialized pointer is a bad practice it is pointing to a garbage address
    //despite of doing this we can initialize it with >>> 0 int *p = 0;

    int a = 1;
    int *p = 0; //we can do this also...but never leave pointer uninitialized
    p = &a;
    (*p)++; //we can do this to increment the value  //write it on braces always otherwise it'll not work 
    cout<<"a is: "<<a<<endl; //*p = *p +1 we can also write it like this

    cout<<"value is: "<<num<<endl;
    cout<<"address is: "<<ptr<<endl;
    cout<<"value through pointer is: "<<*ptr<<endl; //*ptr means value stores at that address
    cout<<"size of integer is: "<<sizeof(num)<<endl;
    cout<<"size of pointer pointing to integer is: "<<sizeof(ptr)<<endl;
    cout<<"size of pointer pointing to double is: "<<sizeof(dptr)<<endl;
    //so size of pointer remains same no matter it is integer pointer or double or cahrachter pointer
    
    //copying a pointer 
    int *q = p;
    cout<<"value of q* is: "<<*q<<endl;
    cout<<"value of p* is: "<<*p<<endl;
    cout<<"value of q is: "<<q<<endl;
    cout<<"value of p is: "<<p<<endl; 

    q = q + 1 ;//if adress is 100 it'll not become 101 it'll bcome 104 coz itll be incremented by value of 1 integer
    //will increase by one integer
    cout<<"value of q after increment is: "<<q<<endl;
    return 0;
}