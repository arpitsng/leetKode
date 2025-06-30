#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;

    cout<<"enter first no.:"<<endl;
    cin>>a;
    cout<<"enter second no.:"<<endl;
    cin>>b;
    cout<<"enter operation to perform"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
            break;
         
         case '-': cout<<(a-b)<<endl;   //switch can be used in place of if else
            break;
         
         case '*': cout<<(a+b)<<endl;
            break;
         
         case '/': cout<<(a+b)<<endl;
            break;
         case '%': cout<<(a+b)<<endl;
            break;
        
        default:cout<<"invalid operation";
            break;

    }


    
    
    return 0;
}