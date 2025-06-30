#include<iostream>
#include<string>
using namespace std;


char Lowercase(char ch){ //convert all to lowercase 
                    //by this the output will become case insensitive, mtlv N=n
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch -'A' + 'a';
        return temp;
    }
}

bool Checkpalindrome(char ch[] , int n){ //this output in case sensitive 

    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(Lowercase(ch[i]) != Lowercase(ch[j])){
         return 0;   
        }
        i++;
        j--;
    }
    return 1;
    
}
int main(){

    string str={'b','a','\0','c','d'};  //bacd
    //in string we can even access the null charcter
    //but not in character array basically stirng is a object ..read more on string cpp.com
    char name[6]="No\0On"; //now this is palindrome (we checkin for or aspiring for case insensitive output here)
    cout<<str<<endl<<name<<endl; //bacd & No
    cout<<"string is: "<<Checkpalindrome(name,4);
    return 0;

}