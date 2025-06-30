#include<iostream>
#include<array>

using namespace std;

int main(){ //rotate mtlv jitni key di h uss se aage bdha dege like if key is 2
            // the each element 2 places aage badh jaayega
    
    array<int,4> v1={1,2,3,4} ;
    array<int,v1.size()> temp; //store krege temp me
    int k=2;                     //this is the key
    

    for(int i=0;i<v1.size();i++){
        temp[(k+i)%v1.size()]=v1[i]; 
        // x%n = give no. in range of 0 to n-1
        //this is done for the proper cyclic process like jb array khtm ho jaayega 
        //to indexing first se shuru hogi then
    }
    //v1=temp;
    for(int i=0;i<4;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}