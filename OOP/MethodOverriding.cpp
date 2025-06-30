#include<iostream>  //  FUNCTION/METHOD OVERRIDING
using namespace std;  
                        //run-time polymorphysm 
                        //same name -- same parameters but if used in inherited class
                        //speaking function ka different implementation krdiya
                        //dog vali class me

                        //RULES
                        //only can be done in inherited class
                        //function should be of same name
                        //same parameters

class animal{
    public:
    void speaking(){
        cout<<"speaking.."<<endl;
    }
};

class dog: public animal{
    public:
    void speaking(){
        cout<<"barking.."<<endl;
    }
};

int main(){
    dog d;
    d.speaking();

    return 0;
}