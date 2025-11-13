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
  // Min
  int min = INT_MAX;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(min>arr[i][j]) min = arr[i][j];
    }
  }
  //second max
  int smin = INT_MAX;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if( smin >arr[i][j] && arr[i][j]!=min) smin = arr[i][j];
    }
  }
  cout<<"Second Minmum : "<<smin;
}