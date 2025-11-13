#include<iostream>
using namespace std;
int main(){
    int arr[5];   
    cout<<arr<<endl;   
    cout<<&arr[0]<<endl;  //address
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
// 0x61fefc => &arr
// 0x61fefc => &arr[0]
// 0x61ff00
// 0x61ff04
// 0x61ff08
// 0x61ff0c
//Hexadecimal -> 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f
//cout &arr (same as in arr) cout arr
}