#include<iostream>
using namespace std;

class mom{
    public:
    int x;
    void funct_name(){
        cout<<"Inside funct1"<<endl;
    }
};

class dad{
    public:
    int y;
    void funct_name(){
        cout<<"Inside funct2"<<endl;
    }
};

//multiple inheritance
class child:public mom, public dad{

};

int main(){
    child obj;

    /*
    obj.funct_name(); //will give error ..it raises ambiguity
    */
   
    obj.mom::funct_name();  //scope resolution for calling function from particular class
    obj.dad::funct_name();  //scope resolution for calling function from particular class

    return 0;
}