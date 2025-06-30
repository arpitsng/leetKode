#include<iostream>

using namespace std;

int main(){

  /*  cout<< "done will be done"<<endl;
     
     int i=0;
     for(i;i<=5;i++){
       
      for(int j=0;j<=i;j--){
         cout<<"#";
        
      }
         cout<<"\n";
     }

    return 0;*/

    char i;
    cin>>i;

   

      if(i<=57){
         cout<<"it is a number from 0 to 9";
      }
    else if(i<90){
         cout<<"it is a upper8case alphabet";
      }
      else if(i<122){
         cout<<"it is a lowercase alphabet";
      }

return 0;
}