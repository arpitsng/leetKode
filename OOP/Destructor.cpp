#include<iostream>
using namespace std;

//#include"heroClass.cpp"  //thats how we can import or include any code in here 

//deallocates memory occupied by class objects

class hero{
    int health;
    int level;

    public:

    //default constructor
    ~hero(){ 

    //for dynamic objects we have to provide manual destructor and for static it is called automatically
        cout<<"destructor called"<<endl; //delete keyword is used
    }
};

int main(){
    hero h1;

    hero* h2 = new hero;
    delete h2; //after doing this destructor is called 

    return 0;
}