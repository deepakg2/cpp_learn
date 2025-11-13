#include<iostream>
using namespace std; 
int main(){
    cout<<"enter day number : ";
    int x;
    cin>>x;
    switch(x){
        case 1 :  //jan
        cout<<"31";
        break;
        case 2 :  //feb
        cout<<"28";
        break;
        case 3 :  //mar
        cout<<"31";
        break;
        case 4 :   //apr
        cout<<"30";
        break;
        case 5 :   //may
        cout<<"31";
        break;
        case 6 :   //june
        cout<<"30";
        break;
        case 7 :  //jul
        cout<<"31";
        break;
        case 8 :   //aug
        cout<<"31";
        break;
        case 9 :  //sep
        cout<<"30";
        break;
        case 10 : //oct
        cout<<"31";
        case 11 :  //nov
        cout<<"30";
        break;
        case 12 :  //dec
        cout<<"31";
        break;
        
    }
}