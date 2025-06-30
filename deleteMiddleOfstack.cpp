#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int size, int cnt){

   //base case
   if(cnt == size/2){
      inputStack.pop();
      return ;
   }

   int num = inputStack.top(); //top element ko save krke rakh liya
   inputStack.pop();

   //recursive call
   solve(inputStack, size, cnt+1 );
   inputStack.push(num); //vapis se daal do
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int cnt = 0;
   solve(inputStack, N, cnt);
}