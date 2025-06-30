#include<iostream>

using namespace std;
int main(){
    
    int t1=0;
    int t2=1;
    int nextterm=t1+t2;
    int n;
    cout<<"enter the no. till you want the series: "<<" ";
    cin>>n;
    cout<<t1<<" "<<t2<<" "; 
    for(int i=1; i<n;i++ ){

        cout<<nextterm<<" ";
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;


    }
    return 0;
}