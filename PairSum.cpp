#include<iostream>
using namespace std;

void pairsum(int arr[], int n) //considering array is sorted
{                              //https://bit.ly/3EwlU6e
    int sumno;
    cout<<"enter the no. to find its pair of sum";
    cin>>sumno;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sumno)
            {
                cout<<endl<<"the pair of no. is"<<arr[i]<<arr[j];
            }
        }
    }
}
int main(){

    int arr[5]={1,2,3,4,5};
    pairsum(arr,5);
    return 0;
}