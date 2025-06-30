#include<iostream>
using namespace std;

//checking wheather n is present in array in or not
bool search(int array[],int size, int element){
    for(int i=0;i<size;i++){
        if(element==array[i]){
            return 1;
        }
     }
     return 0;
}
int main(){

    int test[5]={2,34,32,11,4};
    int element;
    cout<<"enter the element you want to search"<<endl;
    cin>>element;
    bool found=search(test,5,element);
    if(found){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}