#include<iostream>
#include<vector>  // https://leetcode.com/problems/search-...
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row =matrix.size();
        int col= matrix[0].size();

        int s=0;
        int e = (row * col) -1;
        int mid = s+(e-s)/2;

        while(s <= e){ //col/mid = row no.   //col%mid = col no.
            if(matrix[mid/col][mid%col] == target){
                return 1;
            }
           if(matrix[mid/col][mid%col] > target){
                e = mid-1;
            }
            else{
                s = mid +1;
            }
            mid = s+(e-s)/2;
        }
     return 0;

    }