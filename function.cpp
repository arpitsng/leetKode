#include<iostream>
using namespace std;

int power(int a , int b){ //can also write is as power()
                         /* power()
                         int a, int b;
                         *******code*****  */

    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans; //we can also write print here,
    //so that we dont have to let another integer like 'answer' below 
    //but return is more often used
    //it stores the value in it but it doesnt print it
    //if we write cout(print) here the we dont have to declare any other valriable
    //like answer, just power(2,4)...and we get the answer
}
int main(){
    //this program for finding power of a number by using functions
    int answer=power(2,3); //to get the the answer 
                            //we can write it as cout<<power(2,3)
                            //will give the same result
    cout<<answer;

    return 0;
}