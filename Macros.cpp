#include<iostream>
using namespace std;

#define pi 3.14  //macro set for pi it cant be changed or updated from main 

//no extra memory is occupied in here

int main(){

    double area;
    int r=6;
    area = pi * r * r;  //pi can be be used through out the code with this fixed value
    cout<<"area is: "<<area<<endl;

    return 0;
}