#include<iostream>
using namespace std;

class mom{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
};

class boy: public mom{

};

class girl: public mom{

};

//girl and boy and boy has no connection with each other 
//but both are connected with mom