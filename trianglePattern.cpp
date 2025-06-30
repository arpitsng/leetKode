#include<iostream>
using namespace std;

int main(){

int noofrows,noofcolumns;

int i=1;
int number=1;
cout<<"enter no. of rows:"<<" ";
cin>>noofrows;
cout<<"\n";
cout<<"enter no. of cloumns:"<<" ";
cin>>noofcolumns;

for(i;i<=noofrows;i++){

    for(int j=1;j<=i;j++){
        cout<<i-j+1;
       
        
        
    }
    number=1;
    cout<<"\n";
}

return 0;


}