#include<iostream>
using namespace std;
void starTriangle(int x){
     for(int i=1;i<=x;i++){
      for(int j=1;j<=i;j++){
         cout<<"*";
      }
      cout<<endl;
   }
}
int main(){
  starTriangle(6);  //function calling
  cout<<"Hello world"<<endl;
   starTriangle(7);
   cout<<"Hello world"<<endl;
   starTriangle(5);
   cout<<"Hello world"<<endl;
}