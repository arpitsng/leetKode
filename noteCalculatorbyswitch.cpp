#include<iostream>
using namespace std;
int main(){

    int note;
    int amount=1330;

    cout<<"enter the amount of note"<<endl;
    cin>>note;

    switch(note){ //for integer argument 
                //we have to put brackets for char we have to put ''

        case (100):cout<<"no. of notes = "<<(amount/note)<<endl;
            break;
        
        case (50):cout<<"no. of notes = "<<(amount/note)<<endl;
            break;
        
        case (20):cout<<"no. of notes = "<<(amount/note)<<endl;
            break;
        
        case (10):cout<<"no. of notes = "<<(amount/note)<<endl;
            break;

        default:cout<<"enter a valid note"<<endl;

    }


    return 0;
}