#include<iostream>
#include<stack>
#include<cstring>

using namespace std;


int main(){

    string str = "hello";
    stack<int> s;
    string ans = "";

    for(int i = 0; i<str.length(); i++){
        s.push(str[i]);
    }

    while( !s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout<<ans;
}

