#include<iostream>
using namespace std;

int main(){

    int row;
    int col;
    cin>>row>>col;

    int** arr = new int*[row]; //initialized 2d array

    //creation of 2d array
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }


    //taking inputs
     for(int i = 0; i < row; i++){
        for(int j=0; j < col; j++){
            cin>>arr[i][j];
        }
        
    }

    //delelting memory

    for(int i=0; i<row; i++){
        delete [] arr[i];  //releasing memmory of inner array
    }

    delete [] arr;  //releasing memory of outer array //smjh ja bhai.. nhi to vid dek firse 
    //lec-29



    return 0;
}