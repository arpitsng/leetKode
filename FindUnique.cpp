#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i]; //XOR a^a=0
    }                   // a^0=a
    return ans;         //sbke sath xor krne k baad same cancel out hojayega
                        //jo unique hoga vo rhe jaayega
}
int main(){
    int arr[5]={2,2,1,33,33}; //this algo only work 
    cout<<findUnique(arr,5);  //for elements that are present twice
    //like agr koi element 2 se jyada bar present hua to ye code unique nhi bta pata
   
    return 0;         }       