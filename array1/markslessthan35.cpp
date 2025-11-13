#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of students : ";
    cin>>n;
    int marks[n]; //0 to n-1          //4th index => 5th element

       cout<<"enter the marks : ";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }

    cout<<"Roll no. : ";
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}