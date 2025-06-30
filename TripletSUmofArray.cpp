#include<iostream>
using namespace std;

void pairsum(int arr[], int n) //considering array is sorted
{                              //https://bit.ly/3EwlU6e
    int sumno;
    cout<<"enter the no. to find its pair of sum ";
    cin>>sumno;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sumno)
            {
                cout<<endl<<"the pair of no. is "<<arr[k]<<arr[j]<<arr[i];
            }
            
            }
        }
    }
}
int main(){

    int arr[5]={1,2,3,4,5};
    pairsum(arr,5);
    return 0;
}