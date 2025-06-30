#include<iostream>
#include<vector>  //https://leetcode.com/problems/spiral-...
using namespace std;


class Solution {
vector<int> ans;
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        

        int row = matrix.size(); //total rows
        int col = matrix[0].size(); //total columns
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row -1;
        int endingCol = col-1;
        int total= (row*col);
        int count=0;

        while(count < total){
        //print starting row
        for(int index=startingCol;count < total && index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]); 
            count++;
        }
        startingRow++;

        //print ending col
        for(int index=startingRow;count < total && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]); 
            count++;
        }
        endingCol--;
        
        //print endnig row
        for(int index=endingCol;count < total && index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]); 
            count++;
        }
        endingRow--;

        //print starting col
        for(int index=endingRow;count < total && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]); 
            count++;
        }
        startingCol++;
    }
    return ans;
}
};