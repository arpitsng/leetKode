#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){ 
            cout<<"the number is not prime  ";
            isPrime=0;
            break;
        }}
        
        if(isPrime==0){
            cout<<"the number is not prime";
        }
        else{
            cout<<"the number is prime";
        }
    
    return 0;
}