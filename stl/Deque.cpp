#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(1);//front me 1 daalo
    d.push_back(2);//rear/back me 2 daalo
    cout<<"before deletion"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after deletion by pop_back"<<endl;
    d.pop_back();//last element uda do push_front bi hota h
    for(int i:d){
        cout<<i<<" ";
    }
    //d.at(2) ..2 index pe value btao
    //d.front(); d.back(); first or last element btao
    //d.empty();
    //d.size()
    //d.erase(d.begin(),d.begin+1) begin se strt kr or 1 elementr hta de mtlv first element
    return 0;
    
    }
