#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,4,6,2,4,6,3,5,3,6,3,2,4};
    int size = sizeof(arr)/sizeof(arr[0]); //=> size
    cout<<size;
}