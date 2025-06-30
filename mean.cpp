#include<iostream>

using namespace std;

int main(){
int sum =0;
int n,mean;


cout<<"enter length of arraay:"<<endl;
cin>>n;

int arr[n];
cout<<"enter elements in array"<<endl;
for(int i=0;i<n;i++){

   
    cin>>arr[i];
    sum = sum+ arr[i];



}

mean=sum/n;
cout<<"the mean is:"<<mean;


return 0;
}