#include<iostream>
using namespace std;

//when a function call itself....is called recursion

int factorial(int n){

    //BASE CASE -- always returns a value
    if(n==0)
        return 1;
    
    
    //recurrence relation

    int smallProblem = factorial(n - 1);  //fact(n) = n * fact(n-1) .. fact(n-1) = small prob ..this whole is big problem
    int BigProblem = n * smallProblem;

    return BigProblem;  //or ---- return n * fact(n-1)
}


void print(int n){   //tail recursion
    //base case      //base case
    if(n==0)
        return;
    
    cout<<n<<endl;   //processing

    //recurrence relation  //recurrence relation
    print(n-1);

}


void print2(int n){   //Head recursion
    //base case           //base case
    if(n==0){
        return ;
    }
    
    //recurrence relation  //recurrence relation
    print2(n-1);
  
   cout<<n<<endl;          //processiong

    
}

int main(){

    int n= 6;
    int ans = factorial(n);
    cout<<"answer is: "<<ans<<endl;
    cout<<"counting till n:"<<endl;
    print(n);
    cout<<"counting till n using head recursion"<<endl;
    print2(n);

    return 0;
}