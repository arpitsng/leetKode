#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    vector<int> v2(v);//v ko v2 me copy krdiya
    //vector<int> v(5,1) //5 size ka bna or sare element ko 1 se initialize krde ya value 1 assign krde
    cout<<"capacity of vector with no element"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity of vector after 2 element"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity of vector after 3 element"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity of vector after 4 element"<<v.capacity()<<endl;
    cout<<"size of vector after 1 element"<<v.size()<<endl;
    cout<<"clear krdo vector ko " <<endl;
    v.clear();


//pop_back() last element dlt kro
//l.front(),l.back first or last ekemnt btao
//l.at(2) specific index pe value btao kitni h
//ye vector or array dono me chlte h functions mostly

//size ka mtlv kitne element h usme
//capacity mtlv kitne element bhr skte h usme
//vector me jb capacity nhi hoti to vo capacity ko double kr deta h
//dynamic hota h ye
//agr vector khali h to uski capacity 0 hoti h
//jese iss code me 3 elemnt daalne k baad vector ki capacity
//2 se 4 {double} ho gyi
    return 0;
}