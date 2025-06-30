#include<iostream>
using namespace std;

void update(int**p2){ //only one of this stmt will work at a time so cmnt remaining

    p2 = p2 + 1 ;  //--NO
    //kya kuch change hoga? - NO coz adress of double pointer
    //will be increased by one integer but only in  this update function

    *p2 = *p2 + 1;  //--YES
    //kya kuch change hoga? -YES coz value at pointer 2 means address of pointer one
    //will be increased by one integer

    **p2 = **p2 + 1; //-- YES
    //kya kuch change hoga? -YES coz value of pointer 2 goes 
    //to pointer 1 and value stored at that adress will be printed
}

int main(){

    int a= 5;
    int* p = &a;  //pointer pointing to a
    int** p2 = &p; //pointer pointing to another pointer

    // cout<<"value of a directly: "<< a <<endl;
    // cout<<"value of a with pointer 1: "<< *p <<endl;
    // cout<<"value of a with pointer 2: "<< **p2<<endl<<endl;

    // cout<<"address of a directly: "<< &a <<endl;
    // cout<<"adress of a with pointer 1: "<< p <<endl;
    // cout<<"address of a with double pointer: "<< *p2 <<endl<<endl;

    // cout<<"address of pointer 1: "<< &p <<endl;
    // cout<<"address of pointer 1: "<< *p2 <<endl;
    // cout<<endl;

    // cout<<"address of pointer 2 directly: "<< &p2 <<endl;

    cout<<"before: "<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after: "<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

    //if i do this (*p)++ post increment so first it'll print the old value and then it'll print the new incremented value
    

    return 0;
}