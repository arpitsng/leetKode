#include<iostream>
using namespace std;
                //size of object
class hero{
    private:
    int health;
    int level ; //same memory as the datatype used here size is 4 bytes

    public:
    int getHealth(int h){
        health = h;
        return health;
    }
    int getlevel(int l){
        level = l;
        return level;
    }

};

class empty{
    //empty class  //1 byte is reserved for empty class for idntification 
};

int main(){
    // Create an object of the empty class
    empty e;
    // Create an object of the hero class
    hero h;
    
    cout<<"size of object of empty: "<<sizeof(e)<<endl;
    cout<<"size of object of hero: "<<sizeof(h)<<endl;

    //STATIC MEMORY ALLOCATION
    hero h1;

    //DYNAMIC MEMORY ALLOCATION
    hero* heroptr=new hero;    //created a pointer of hero type
                            //delete h2; //deallocate the memory


    // h1.level = 55;
    // h1.health= 44;

    // (*heroptr).getHealth(44);
    // (*heroptr).getlevel(55);

    int newhealth = heroptr ->getHealth(77);

   // cout<<"level of h1: "<<h1.level<<endl;
    cout<<"health of h2: "<<(*heroptr).getHealth(44)<<endl;
    cout<<"new health through pointer "<<newhealth<<endl;
    return 0;
    
}
//access modifiers
//private  -- scope lies only in the class
//public   -- scope lies through the code
//protected -- scope lies in the class and its derived classes