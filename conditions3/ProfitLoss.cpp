#include<iostream>
using namespace std;
int main(){
    float c,s;
    cout<<"Cost price : ";
    cin>>c;
    cout<<"Selling price : ";
    cin>>s;
    if(s>c){
        cout<<"Profit : "<<s-c;        
    }
    if(s==c){   
         cout<<"No profit No Loss";
    } 
    
    if(s<c){
        cout<<"Loss : "<<c-s;
    }
}