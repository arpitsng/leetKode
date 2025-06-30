#include<iostream>
using namespace std;

void max(int array[],int size){
    int max=array[0];
    for(int i=1;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<<"the max element is  :"<<max<<endl;
}
void min(int array[],int size){
    int min=array[0];
    for(int i=1;i<size;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<"the min element is  :"<<min<<endl;
}
int main(){
    int test[5]={233,44,123,444444,5};
    max(test,5);
    min(test,5);
    return 0;
}