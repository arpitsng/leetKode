#include<iostream>
using namespace std; //NcR= (n!)/(r!*((n-r)!))

int factorial(int n){
     int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int NcR(int n,int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
 

    return num/denom;
}
int main(){

    int n , r;

    //cin>>a>>b;
    n=7,r=3;
    cout<<"answer is : "<<NcR(n,r);
    return 0;
    
}