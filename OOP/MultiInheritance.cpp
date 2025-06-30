#include<iostream>
using namespace std;

class mom{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
};

class dad{
    public:
    int y;
    void funct2(){
        cout<<"Inside funct2"<<endl;
    }
};

//multiple inheritance
class child:public mom, public dad{

};

int main(){
    child c;
    c.funct1();
    c.funct2();
}
