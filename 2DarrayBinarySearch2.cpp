#include<iostream>
#include<vector>  // https://leetcode.com/problems/search-... 

using namespace std;


 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int Rowindex =0;
        int Colindex = col-1; //last element of col;
         
        while(Rowindex < row && Colindex >= 0){
            int element = matrix[Rowindex][Colindex];

            if(element == target){
                return 1;
            }

            if(element > target){
                Colindex--;
            }

            if(element < target){
                Rowindex++;
            }
        }
        return 0;
    }