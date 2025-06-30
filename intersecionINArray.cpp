#include<iostream>
using namespace std;
                                                    //coding ninjas ques
void intersection(int arr1[],int arr2[],int n,int m){ //https://bit.ly/3Il0c7n 
    int ans[10];
    int i=0,j=0 ,k=0;
    while(i<n and j<m){                           //here both the arrays are sorted
        if(arr1[i]==arr2[j])
        {
            ans[k]=arr1[i];
            cout<<ans[i]<<" ";
            k++;
            i++;
            j++;
        }

        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        
        else
        {
            j++;
        }
    }
   
}

int main(){

    int arr1[]={2,3,4,4,5};
    int arr2[]={2,2,2,3,4};
    intersection(arr1,arr2,5,5);
    return 0;
}