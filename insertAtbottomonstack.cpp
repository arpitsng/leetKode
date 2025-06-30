#include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x){

    //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int val = myStack.top();
    myStack.pop();

    //recursive call
    solve( myStack, x );

    //vapis daaldo aate hue
    myStack.push(val);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
