#include<iostream>   //https://leetcode.com/problems/subsets/       -- subsets
#include<vector>
#include<string>  //https://bit.ly/33hi3MB         ---string subsequences

using namespace std;

//to find subsets of an array or say power set!!!  
void solve(vector<int> nums, vector<int> outputArray, int index, vector<vector<int>>& ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(outputArray);
            return ;
        }

        //exclude
        solve(nums, outputArray, index+1, ans);

        //include
        // int* element = new int;
        // *element = nums[index];
        outputArray.push_back(nums[index]);
        solve(nums, outputArray, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int index = 0;
        vector<vector < int> > ans;
        vector<int> outputArray;
        solve(nums, outputArray, index, ans);
        return ans;
    }



	void solve(string str, string output, int index, vector<string>& ans){
	//base case
	if(index >= str.length()){
		if(output.length() > 0){  //dont copy emoty string
			ans.push_back(output);
		}
		return;
	}

	//exclude
	solve(str , output, index+1, ans);

	//include
	char element = str[index];
	output.push_back(element);
	solve(str, output, index+1, ans);


}
vector<string> subsequences(string str){
	
	// Write your code here
	vector <string> ans;
	string output;
	int index= 0;
	solve(str, output, index, ans);
	return ans;
	
}

