#include<iostream>
using namespace std;

class parent{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
};

class child:public parent{
    public:
    int y;
    void funct2(){
        cout<<"Inside funct2"<<endl;
    }
};

int main(){
    child rahul;
    cout<<rahul.x<<endl;  //garbage value coz not assigned a value
    cout<<rahul.y<<endl; //same 
    rahul.funct1();
    rahul.funct2();

    return 0;
}