#include<iostream>
#include<vector>   // https://bit.ly/329Le3K

//t(n) = O(n*m) //time complexity
using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans; //answer will be stored in here

    for(int col=0; col<mCols;col++){ //column iteration loop
    
   if( (col%2) != 0 ) { //col&1 --odd
       //odd column -- bottom to top
       for(int row=nRows-1 ; row<=0; row--){
           ans.push_back(arr[row][col]); //inserting elements in ans array
       }
   }
   else{  // if col is even or zero -- top to bottom
        for(int row=0; row<=nRows-1; row++){
            ans.push_back(arr[row][col]);
        }
   }
}
return ans;
}
int main(){
  
    vector<vector<int>> arr ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}; //vector of vector is 2d array
    for(int i=0;i<)
}
