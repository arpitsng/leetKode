#include<iostream>
#include<climits> //for minindex16
using namespace std;

int Largestrowsum(int arr[][3], int row , int col){ //we cant give empty 2d array in function it'll give error

    int rowIndex=0;

    int maxsum=INT16_MIN; //maxsum index intially lowest

    for(int i=0;i<row;i++){
       int sum=0;
    for(int j=0;j<col;j++){
        sum+=arr[i][j];
        }
        if(sum>maxsum)
            {
            maxsum=sum;
            rowIndex=i;
            }
    }
    return rowIndex; //index of row whose sum is maximum
}

int main(){

    int arr1[3][3]={{1,11,1111},{2,22,2222},{3,33,3333}}; //row wise sum
    int maxIndex=Largestrowsum(arr1,3,3);
    cout<<"Index of row with max sum is "<<maxIndex<<endl;
    return 0;
}