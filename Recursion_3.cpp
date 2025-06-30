#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1){  //already sorted
        return true;
    }

    //recurrence relation
    if(arr[0] > arr[1]){ //not sorted
        return false; 
    }
    //else -- we can do this too ..this can go under else stmt also
    //recurrence relation
    bool ans = isSorted(arr+1 ,size - 1);  //remaining part

    return ans;
}

int returnsum(int arr[], int size){
    //base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }
    
    //recurrence relation

    int smallproblem = returnsum( arr+1 ,size - 1);
    int bigProblem = arr[0] + smallproblem; 
    return bigProblem;  //return arr[0] + returnsum(arr+1, size - 1);
}

bool LinearSearch(int arr[], int size, int key){
    //base case
    if(size == 0 ){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    
    else {
    bool ans = LinearSearch(arr + 1, size - 1, key);  //remaining part
    return ans;
    }


}

bool BinarySearch(int arr[], int start, int end, int key){
    int mid = start + (end -start)/2;
    //base case
    if(start > end){
        return false;
    }
    if(arr[mid] == key){
        return true;
    }
    if(key > arr[mid]){
        return BinarySearch(arr, mid + 1, end, key);  //s = mid + 1 //right side jaao
    }
    if(key < arr[mid]){
        return BinarySearch(arr, start, mid - 1, key);  //e = mid - 1 //left side aajao
    }
}



int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool ans = isSorted(arr, size);
    bool Search = LinearSearch(arr, 5 , 4);
    bool bSearch = BinarySearch(arr, 0 , 5 , 88);
    if(ans){
        cout<<"The array is sorted"<<endl;
        }
        else{
            cout<<"the array is not sorted"<<endl;
        }

    cout<<"sum of array is: "<<returnsum(arr, 5)<<endl;

    if(bSearch){
        cout<<"element found BY binary search"<<endl;
        }
        else{
            cout<<"element not found by binary search"<<endl;
        }
        if(Search){
        cout<<"element found "<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
        return 0;
}
