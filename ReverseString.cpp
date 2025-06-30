#include<iostream>
using namespace std;

void reverseString(char ch[],int n ){//n=length yha actual length deni h not like 
                            //ki last char null h to usko bi add kro usko ni krna add isme
    int i=0;
    int j=n-1;
    while(i<j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    
}

int main(){
    char name[6] ="Arpit";
    reverseString(name,5);
    cout<<endl<<name;
    return 0;
}