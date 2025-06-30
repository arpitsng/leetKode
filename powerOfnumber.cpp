#include<iostream>
using namespace std;
int main(){

    int num,power; //to find pow(a,b);
    cout<<"enter no. and its power to calculate "<<endl;
    cin>>num;
    cin>>power;
    int ans=1;

    for(int i=1;i<=power;i++){
        ans=ans*num;
    }
    cout<<"the answer is: "<<ans<<endl;
    
    return 0;
}