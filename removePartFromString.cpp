#include<iostream> // https://bit.ly/3sfP71Q 
#include<string>
using namespace std;

string removePart(string s , string part){
    while(s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part) , part.length());
    }
    return s;
}

