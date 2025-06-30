#include<iostream>
using namespace std;

int main(){
int integer;
int ans=0;
int digit;
cout<<"enter the integer : ";
cin>>integer;

 while(integer!=0){

digit = integer%10;
ans=((ans*10)+digit);
integer=integer/10;
 
 }
    
    
    
    
  cout<<ans;  
  return 0;
}