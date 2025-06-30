void insertAtbottom( stack<int> &stack, int element){

    //base case
    if(stack.empty()){
        stack.push(element);
        return;
    }

    int val = stack.top();
    stack.pop();

    //recursive call
    insertAtbottom( stack, element);

    //vapis push krte hue jaao
    stack.push(val);
}

void reverseStack(stack<int> &stack) {
    // base case
    if( stack.empty()){
        return;
    }

    int val = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtbottom(stack, val);
}