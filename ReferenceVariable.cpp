#include<iostream>
using namespace std;

void update1(int n){  //pass by value -- main me ek copy create hogi n variable ki joki alg se memory legi
    n++;
}

void update2(int &n){  //pass by reference  -- refrencing the the value give at function call so the value will be updated in main function also ....same memory block is allocated to it or no extra memory is allocated to this variable
    n++;
}


int main(){ 
//never return pointer or refernce variable in function it is also a bad practice coz that is a 
//local variable of that function we cant access that on main function

    int original = 5;

    //creating refernce variable
    int& reference = original;  //no extra memory is allocated to this variable it has the same memory that is allocated to original variable it is just pointing to original variable


    // cout<<"original: "<<original<<endl;
    // original++;
    // cout<<"original: "<<original<<endl;

    // reference++;
    // cout<<"original: "<<original<<endl;

    // cout<<"refernce: "<<reference<<endl;

    cout<<"before update1: "<<original<<endl;
    update1(original);
    cout<<"after update1: "<<original<<endl;

    cout<<"before update2: "<<original<<endl;
    update2(original);
    cout<<"after update2: "<<original<<endl; //value has been incremeted coz reference variable is used in function definition so update will be done on original variable


//BAD PRACTICE -- never assign variavle memory to array

//int n;
//cin>>n;
//int arr[n];   --nenver do this and also 

//the problem here is that we are allocating memory to array on run time
//array memory is allocated in stack so if we are alocating memory at run time 
//instead of compile time program will crash coz if memmory allocated at 
//compile time the stack should have came in such a way that 
//it'll cover the allocated memmory but since we are doing this on runtime 
//stack will come with a predefine memory which can be smaller 
//than memmory we want so the program will crash


    return 0;
}