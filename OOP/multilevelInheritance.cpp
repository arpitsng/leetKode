#include<iostream>
using namespace std;

class a{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
};

class B:public a{
    public:
    int y;
    void funct2(){
        cout<<"Inside funct2"<<endl;
    }
};

class C:public B{
    public:
    int z;
    void funct3(){
        cout<<"Inside funct3"<<endl;
    }
};

int main(){
    C obj;
    obj.funct2();
    obj.funct3();

    B obj2;
    obj2.funct2();
    obj2.funct1();

    a obj3;
    obj3.funct1();

return 0;
}