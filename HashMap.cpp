#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> m; //-- key, value

    //insertion
    pair<string, int> p = make_pair("hello", 1);
    m.insert(p);

    //2
    pair<string, int> p2("world", 1);
    m.insert(p2);

    //3
    m["third"] = 2;


    //search
    cout<< m["hello"]<<endl;
    cout<<m.at("hello")<<endl;
    
    //if there is no entry of any key n we try to search it it'll show error
    //but if we create any entry without its value
    //it'll consider itss value as 0 by default


    //size
    cout<<"size: "<<m.size()<<endl;

    //to check presence 
    cout<<m.count("hello")<<endl; //output - 1
    cout<<m.count("absent")<<endl; // output - 0

    //erase
    m.erase("third");

    //traversal -- 1
    for(auto i : m){
        cout<<i.first <<" -> "<<i.second<<endl;
    }

    //traversal -- 2, by creating an iterator
     
    unordered_map<string, int> :: iterator it = m.begin(); 
    while(it != m.end()){
        cout<<it -> first<<" -> "<< it -> second<<endl;
        it++;
    }

    //traversal 3
    for(auto [key, value] : m){
    cout << key << " -> " << value << endl;
}

    
}