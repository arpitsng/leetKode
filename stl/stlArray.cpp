#include<iostream>
#include<array> //array ka stl include kiya
using namespace std;

//stl = std. template library
//{ mtlv inke predefined functions hm use kr skte h}
int main(){
array<int,4> a = {2,3,4,5}; //ese initialize krte h array ko stl me

cout<<"element at index 3: "<<a.at(3)<<endl; //at function

cout<<"if empty "<<a.empty()<<endl;//to check if empty return bool value{true or false}

cout<<"first elemnet : "<<a.front()<<endl;//first element

cout<<"last element : "<<a.back()<<endl;
return 0;
}