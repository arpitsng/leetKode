#include<iostream>
using namespace std;

class human{
    public:
    int health;
    int age;
    string name;
    
};

class Male:public human{
    public:
    string gender;
};


int main(){
    Male m1;
    m1.health = 100;
    m1.age = 25;
    m1.name = "John";
    m1.gender = "Male";
    cout << "Name: " << m1.name << endl;
    cout << "Age: " << m1.age << endl;
    cout << "Health: " << m1.health << endl;
    cout << "Gender: " << m1.gender << endl;
    return 0;

}

/*
1.single inheritance --  ek class se ek or class inherit hui
2.multi level inheritance -- A class se B inherit hui or B se C and C se D and so on...
3.multiple inheritance -- 2 class se ek class inherite ho gyi ... multiple parent class
4.herarchichal inheritance -- single class se multiple class inherit hui..one parent multiplr child
5.hybrid inheritanacee -- combination of more than one type of inheritance..

*/