#include<iostream>

using namespace std;

int main(){
    int a=2;
    int b=4;

    cout<< (a&b) <<endl; //ABD operator
    cout<< (a|b) <<endl; //OR operator
    cout<< (~a) <<endl; //NOT OPERATOR
    cout<< (a^b) <<endl; //XOR operator
    
    return 0;
}