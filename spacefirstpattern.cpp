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
char ch='A';


for(i;i<=noofrows;i++){
    int space=noofrows-i;
    for(int j=1;j<=space;j++){
        
        cout<<" ";
       space = noofrows-i-1;

    }
    for(int k=1;k<noofrows;k++){
        cout<<"#";
    }
   
    cout<<"\n";
}

return 0;


}