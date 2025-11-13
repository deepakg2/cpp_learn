#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
   if(n%5==0 || n%3==0){
        cout<<"n divisible by 5 or 3";
    }
    else{
        cout<<"n not divisible by 5 or 3";
    }
}
