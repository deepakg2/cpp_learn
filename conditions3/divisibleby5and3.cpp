#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"n divisible by 5 and 3";
    // }

    if(n%15==0){
        cout<<"n divisible by 5 and 3";
    }
    else{
        cout<<"n not divisible by 5 and 3";
    }
}