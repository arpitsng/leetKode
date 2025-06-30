#include<iostream>
#include<queue>
using namespace std;

int main(){
    //FIFO

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"before deletion ";
    cout<<"front element "<<q.front()<<endl;
        cout<<"back element "<<q.back();

///push pop krne k baad size bi bdl jata h

    q.pop();
    cout<<" after deletion "<<"front element "<<q.front();

    return 0;
}