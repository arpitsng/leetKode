#include<iostream>
using namespace std;
int main(){
    
    //continue k neeche vala statement execute nhi hota 
    //continue k baad loop vapis incremental position pe chla jata h

    for(int i=1;i<5;i++){
        cout<< "hoga execute"<<endl;
        cout<<" ye bi hoga execute"<<endl;
        continue;

        cout<<"ye unreachable h";
        }
    
    
    return 0;
}