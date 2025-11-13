#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows : ";
    cin>>n;
    //no of stars = n + 1 - i
    int nsp = 1 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
         for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
         for(int l=1;l<=n+1-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
