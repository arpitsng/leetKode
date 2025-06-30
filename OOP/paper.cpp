#include<iostream>
using namespace std;

int sam (int n)

{

static int i = 5;

if(n >= 5)

return n;

n=n+i;

i++;

return sam(n);

}

int main(){
    cout<<"anx: " << sam(1)<<endl;
    return 0;
}