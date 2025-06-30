#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  
  //if length is odd then its impossible to convert it into valid string
  if( str.length() % 2 != 0) return -1;

  //s1 : saare valid pairs ko hta do initially fir jo invalid h unpe kaam kro
  stack <char> st;

  for( int i=0; i< str.length(); i++){
    char ch = str[i];

    if(ch == '{') 
      { st.push(ch); }

    else {
      if( !st.empty() && st.top() == '{') st.pop(); //remove valid
      
      //else jitne bi h sb push krdo
      else st.push(ch);
    }
  }

  int open = 0, close = 0;

  while( !st.empty() ){
    if(st.top() == '{'){
      open++;
      st.pop() ;
    }
      
    else{
      close++;
      st.pop();
    }
  }

  //is open + close is odd then return -1
  //if( (open + close) % 2 != 0) return -1;

  return ((open + 1)/2 + (close + 1)/2);
}