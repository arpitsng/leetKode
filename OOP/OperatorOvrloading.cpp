#include<iostream>
using namespace std;  //function overloading me arguments alg hone chiyr return type se kuch nhi hota

class A{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
};

class B{
    public:
    int x;
    void funct1(){
        cout<<"Inside funct1"<<endl;
    }
//operation oveloading  -- + operator overloading  --operators ko objects pe use kran ---as we wish!! + se subtract kra do if u want
    int  operator+ (B& obj){  //funtion type "operator" (obj)--if binary 
    cout<<"Inside operator+"<<endl;
    cout<<"Sum: "<<this -> x + obj.x<<endl;
    return this -> x + obj.x;
}
    void operator() (){  //overloading ( ) operator
        cout<<"i am bracket: "<<endl;
    }

};

int main(){
    B obj;
    obj.x = 10;
    B obj2;
    obj2.x = 20;
    cout<<obj+obj2<<endl;
    obj();
    return 0;
}





