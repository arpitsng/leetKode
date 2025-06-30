//{ Driver Code Starts  
                        //https://practice.geeksforgeeks.org/pr... 
#include<iostream>
#include<array>
#include<stdlib.h>
#include<string>
using namespace std;


// } Driver Code Ends


class Solution
{
    private:
    int arr[25]={0};
   char ans;
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        
      //  int arr[25]={0} ;
        int number = 0;
        for(int i=0;i<str.size();i++){
            number = str[i] - 'a';  // a=0, b=2 ..z=25
            arr[number]++; //initialize with 0 so we incereasing count to 1 and further
        }
        
        int max= arr[0] , indexOFmax=0;
        for(int i=1; i <= 25;i++){
            if( max < arr[i] ){
                max = arr[i];
                indexOFmax=i;
            }
        }
        ans = indexOFmax + 'a';
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends