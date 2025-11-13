#include<iostream>
#include<climits>
using namespace std;
int main(){
  int m;
  cout<<"Enter rows : ";
  cin>>m;
  int n;
  cout<<"Enter coulumns : ";
  cin>>n;
  int arr[m][n];
  //Input
  cout<<"Input"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
  }
  // Max
  int max = INT_MIN;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(max<arr[i][j]) max = arr[i][j];
    }
  }
  cout<<"Maximum : "<<max;
}