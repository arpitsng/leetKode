#include<iostream>
#include<stack>
using namespace std;

int main(){
    //LIFO  
    stack<string> s;
    s.push("harry");
    s.push("love");
    s.push("shradhha");
    cout<<"top element: "<<s.top();
    //last element top hoga coz of lifo
    //s.empty(),s.at(2),s.size() ye sb chlte h

    return 0;
}