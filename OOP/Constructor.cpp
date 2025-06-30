#include<iostream>          //constructor and destructor has same name as class name
using namespace std;        //they both dont return any value...no return type

class hero{

   
     int health;
     int level;

    public:
   
    hero(){  //default constructor
        cout<<"default constructor: "<<endl;
    }

    hero(int health, int l){ //parameterized constructor
      cout<<"address of current object: "<<this<<endl;
       this -> health = health;
//class vali health     // parameter me passed health
       //this pointer stores address of current object
       //new health ko purani health me daal do

       level = l;
    }

    //copy constructor
    hero(hero& temp){  //deep copy
        cout<<"copy constructor called: "<<endl;
        this -> health = temp.health;  //current ki health ko temp me daalo
        this -> level = temp.level;
    }

    void print(){
        cout<<"health is: "<<health<<endl;
        cout<<"level is: "<<level<<endl;
    }


};

int main(){
    /*
    hero h1; //default constructor
    //if we dont make a default constructor its used by default 
    h1.health = 22;
    cout<<"adress of h1: "<<&h1<<endl;


    hero h2(100); //parameterized constructor
    cout<<"adress of h2: "<<&h2<<endl; //as it is the current object this pointer is pointing towards it
    //same as this pointer
    
    */

   

   hero h1(22, 3); //this is how we can declare/initialize objects using parameterized constructor
   h1.print();

   hero temp(h1); //copies temp
   temp.print();

    h1 = temp ;  //copy assignment operator it means h1.health = temp.health;
                                                   //h1.level = temp.level ;
    return 0;
}

//jese hi tumne khudka koi constructor bnaya to default constructor dies!!
//jo apne aap bnta tha vo vala
//agr hm default constructor bnaye --ek to ye trika 
//ya fir koi bi constructor na bnaye to vo apne aap bn jata h

//agr hmne koi or constructor bnaya to default vala gayab ho jaayega
//copy constructor is bydefault bna hua hota h
//ek object ko dusre object me copy krdeta h
//agr hmne implement kiya copy constructor to default vala copy constructor mar jayega

//default copy constructor do's shallow copy -- means we just using same memory with different names , change in parent reflects in child
//deep copy is done in our implemented copy constructor coz in that we make a whole new array(say, can be int etc)