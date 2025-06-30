//string is a character 1d array which is terminated by a \0 (null character)

#include<iostream>
using namespace std;

int getLength(char ch[]){//strings me hme length dene ki need nhi h like array..

    int count = 0;

    for(int i=0; ch[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    cout<<"enter your name: " ;
    cin >> name;
    //name[2]='\0';
    //cout<<name; //directly we can print our string
    cout<<"length of string is: "<<getLength(name);

    return 0;
}