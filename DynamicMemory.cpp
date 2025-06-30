#include<iostream>
using namespace std;

int main(){

    /*    static                -               dynamic
    
    automaticaly memmory gets           we need to use "delete" keyword 
    released                            to release memory
                                        e.g: delete i; delete single element
                                        delete []arr; delete array
   
    uses fix memory in or char etc     uses fixed memory of datatype + 8 byte of pointer

    */



    //now we want to create a variable in heap(dynamic memmory) so we'll
    //use "new" keyword but here we cant name the variable we can just allocate
    //the memory dynamicaly
    //whenever we write "new int" it returns the address at which mwmmory is allocated
    //so to name the variable whose memory is aloocated dynamicaly we use pointers
    //since it returns the address of that memory location

    new int; //it returns a address
    int* i         =       new int; //now memory is allocated to i dynamicaly
    //static memory        //dynamic memory
   
    //size of this stmt is-- 8 byte for pointer and 4 byte allocated at runtime
    //so size = 8 + 4 = 12
 
// ARRAY DYNAMIC MEMMORY ALLOCATION --fixed size

    int* arr = new int[5]; //total 8 + 20 = 28 byte is used in here
    //in this system pointer takes 4 byte but in 64 bit or that tutorial video 
    //pointer takes 8 byte so thats why i am taking 8 byte in here


//VARIABLE SIZE ARRAY

    int n;
    cin >> n;
    int* arr2 = new int[n]; //total 8 + 4n byte is used
    
    
    return 0;
}