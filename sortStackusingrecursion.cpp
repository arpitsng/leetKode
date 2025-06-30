#include <bits/stdc++.h> 

void sortedInsert( stack<int> &stack, int val ){

	//base case
	if( stack.empty() || ( stack. top() < val)){
		stack.push(val);
		return;
	}

	int num = stack.top();
	stack.pop();

	//recursive call
	sortedInsert( stack, val );

	stack.push(num);

}
void sortStack(stack<int> &stack)
{
	// base case
	if( stack.empty()){
		return;
	}

	int val = stack.top();
	stack.pop();

	//recursive call
	sortStack( stack);

	//insert val in sorted order
	sortedInsert( stack, val);
}