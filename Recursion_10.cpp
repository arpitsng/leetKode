#include<iostream>  //rat in a maze problem
#include<vector>    //https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
using namespace std;

class Solution {
    bool issafe(vector<vector<int>>& m,vector<vector<int>>& visited, int x, int y, int n){
        if(x>=0 && x<n && y>=0 && y<n && visited[x][y] == 0 && m[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> m, int n, vector<string>& ans, int x, int y,vector<vector<int>> &visited, string path ){
        //base case
        if(x == n-1 &&  y ==n-1){ //destination reached
            ans.push_back(path);
            return ;
        }
        
        visited[x][y] = 1;  //marking reached destination as 1
        
        //down 
        int newx = x + 1 ;
        int newy = y ;
        if(issafe(m , visited, newx, newy, n)){
            path.push_back('D');
            solve(m, n , ans, newx, newy,visited,path);
            path.pop_back(); //back- tracking
        }
        
        //left
        newx = x ;
        newy = y -1 ;
        if(issafe(m , visited, newx, newy, n)){
            path.push_back('L');
            solve(m, n , ans, newx, newy,visited, path);
            path.pop_back(); //back- tracking
        }
        
        //right
        newx = x ;
        newy = y + 1 ;
        if(issafe(m , visited, newx, newy, n)){
            path.push_back('R');
            solve(m, n , ans, newx, newy,visited, path);
            path.pop_back(); //back- tracking
        }
        
        //up
        newx = x - 1;
        newy = y ;
        if(issafe(m , visited, newx, newy, n)){
            path.push_back('U');
            solve(m, n , ans, newx, newy,visited, path);
            path.pop_back(); //back- tracking
        }
        
        visited[x][y] = 0;
    }
    
  public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // code here
       vector <string> ans; //empty vector of string 
        if(m[0][0] == 0){ //phli posi thi 0 h to return krdo empty ans
            return ans;
        }
        
        int x = 0;  //row
        int y = 0;  //col
        vector<vector<int>> visited(n, vector<int>(n, 0)); //initialized with 0
        
        // //initializing ans with 0;
        // for(int i=0; i<n; i++){
        //     for(int j =0; j<n; j++){
        //         m[i][j] = 0;
        //     }
        // }
        string path =""; //empty string to store path
        solve(m ,n, ans, x, y,visited, path);
        return ans;
    }
};