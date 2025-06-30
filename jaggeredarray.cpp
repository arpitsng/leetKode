#include<iostream>
using namespace std;

int main(){

    int row = 5;

    int colsize[] = {2,3,4};

    int** arr = new int*[row];

    for(int i=0 ; i<row ; i++){
        arr[i] = new int[colsize[i]];
    }

    //taking inputs

    for(int i=0 ; i<row ; i++){
        for(int j=0; j<colsize[i]; j++){
            cin>>arr[i][j];
        }
    }

    //printing output

    for(int i=0 ; i<row ; i++){
        for(int j=0; j<colsize[i]; j++){
           cout<<arr[i][j];
        }
    }

return 0;
}