#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of row/coulumn : ";
    cin>>n;
     int arr[n][n];
     //input
     cout<<"Input "<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    }
    //print
    cout<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    //Transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //Reverse
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
    while(i<=j){
         int red = arr[k][i];
         arr[k][i]=arr[k][j];
         arr[k][j]=red;
         i++;
         j--;
    }
    }
    cout<<endl;
     //print
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}