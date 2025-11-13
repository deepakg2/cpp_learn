#include<iostream>
using namespace std; 
int main(){
    int a,b;
    char op;
    cout<<"Enter a Problem : ";
    cin>>a>>op>>b;

//     switch(op){
//         case '+' :
//            cout<<a+b;
//            break;
//          case '-' :
//            cout<<a-b;
//            break;
//          case '*' :
//            cout<<a*b;
//            break;      
//          case '/' :
//            cout<<a/b;
//            break;
// } 

   if(op=='+') cout<<a+b;
   if(op=='-') cout<<a-b;
   if(op=='*') cout<<a*b;
   if(op=='/') cout<<a/b;
}