#include<iostream>
using namespace std;

class hero{
    

    public:         //any field that doesnt belong to object but belongs to class
    int health;
    int level;
    static int time;  //static data member does'nt belong to object it belongs to the class

    //we can access it without making any object

    //static function 
    static void printTime(){
    //this pointer doesnt work here or in here we cant even access any data member that is
    //not static 
    //it can only access static data members 
        cout<<time<<endl;
    }

};

int hero :: time = 8;
//we can also access it by using class name
//initialized outside any function and typically initialized in global scope
int main(){
    hero h1;

   cout<<"time: "<<hero::time<<endl;

   //dont do this
   cout<<"time: "<<h1.time<<endl;  //this will give same answer but this practice is not recommended so dont do this
   //only access it with class not with objects

   hero::time++;
   cout<<"time: "<<hero::time<<endl;
   hero::printTime();  //this also only belongs to class

    return 0;

}