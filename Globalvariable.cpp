#include<iostream>
using namespace std;

int score = 99;  //global variable -- can be used throughout the code

//BAD PRACTICE -- coz any function can change its value.. and that will be reflected throughout the code
//insted of this we can use reference variable so that no extra memory will be used 


void a(){
    cout<<"score in a: "<<score<<endl;
    score++;
}

void b(){
    cout<<"score in b: "<<score<<endl;
}

int main(){

    a();
    b();
    score++;

    cout<<"score in main: "<<score<<endl;

    return 0;
}