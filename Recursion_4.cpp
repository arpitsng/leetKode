#include<iostream>
#include<string>
using namespace std;

void reverse(string& s, int i , int j){ //passing by reference coz we want value should be changed in main
    //base case
    if(i>=j){
        return;
    }
    //swap
    swap(s[i],s[j]);
    i++;
    j--;  //can do this too

    //recursive call
    reverse(s, i, j);
}

bool checkPalindrome(string s , int i , int j){
    //base case
    if(i>j){
        return true;
    }

    if(s[i] != s[j]){
        return false;
    }
    else{
        //recursive call
    checkPalindrome(s, i+1, j-1);//we are moving towards the center of the string
    }
    
}

int power(int a, int b){
    //base case
    if(b==0)
        return 1;
    
    if(b==1)
        return a;

    //recursive call
    int ans = power(a, b/2);

    if( b % 2 == 0 ){ //ever power
        return ans * ans;
    }
    else{  //odd power
        return a * ans * ans;
    }
}

void bubblesort(int* arr, int size){
    //base case
    if(size == 0 || size == 1){
        return; //already sorted
        }

    //ek case solve krdo    
    for(int j=0; j<size-1; j++)
    if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
    }

    //recursive call
    bubblesort(arr,size-1);

}
int main(){
    string s = "ABCd";
    int arr[] = {2,311,1,11,4};
  
    reverse(s,0,s.length()-1);   //string , start , end
    cout<<"reversed string: "<<s<<endl;
    cout<<"is it palindrome: "<<checkPalindrome(s,0,s.length()-1)<<endl;
    cout<<"2^5: "<<power(2,5)<<endl;
    bubblesort(arr,5);
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";
    return 0;

}

