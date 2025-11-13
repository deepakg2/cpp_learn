#include<iostream>
using namespace std;
int main(){
    //roll number , marks
    //4 students

    int arr[4][2];
    cout<<" input "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"output "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}