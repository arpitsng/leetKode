#include<iostream>  //https://leetcode.com/problems/permutations/
#include<vector>

using namespace std;

void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i = index ; i<nums.size(); i++){
            swap(nums[i], nums[index]);
            solve(nums, index+1, ans);
            swap(nums[i], nums[index]); //back-track...taki end me orginal string mil jaaye!!
        }
    }

     vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);
        return ans;
    }