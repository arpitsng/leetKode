#include<iostream>
using namespace std;

class hero{
    private:
    int health;
    int level;

    public:
    int kd;
    int gethealth(int h){
        health = h;
        return health;
    }
    int getlevel(int l){
        level = l;
        return level;
    }
};

int main(){
    //STATIC ALLOCATION 
    hero h1;
    h1.gethealth(7);  //way to access private members of a class
    h1.kd = 3;
    cout<<"kd of h1: "<<h1.kd<<endl;

    //DYNAMIC ALLOCATION
    hero *h2 = new hero;
   // h2 ->gethealth(22);  //this is how we use pointer to access pointer in class /'smjh ja bhai'

    cout<<"health of h1: "<<h1.gethealth(44)<<endl;
    cout<<"health of h2: "<<h2->gethealth(22)<<endl;
}