#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}; //row wise sum
    int sum=0;
    for(int i=0;i<3;i++){
        //int sum= 0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" : "<<sum<<endl;
        sum=0; //if we do that above comment we dont need to make it zero again
    }

    return 0;
}