#include<iostream>   //https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include<vector>
using namespace std;

/*Given a string containing digits from 2-9 inclusive, return all possible letter combinations 
that the number could represent. Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below.
Note that 1 does not map to any letters.*/

void solve(string digits, string output, int index, vector<string>& ans, string mapping[]){
    //base case
    if(index >= digits.length()){
        ans.push_back(output);
        return ; 
    }

    int number = digits[index] - '0'; //making it integer equivalent
    string value = mapping[number] ; //alphabet equivalent

    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digits, output, index+1, ans, mapping);
        output.pop_back(); //back-tracking
    }
}

 vector<string> letterCombinations(string digits) {
     int index = 0;
     
     string mapping[10] = {"", "", "abc","def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
     string output;
     vector <string> ans;

     if(digits.length()==0){ //agr no. 0 ya 1 h to uski koi mapping nhi h
        return ans;
     }
     solve(digits, output, index, ans, mapping); 
     return ans;  
    }