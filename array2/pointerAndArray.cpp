#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,3,7,4,5};
   int* ptr = arr;  // int* ptr = &arr[0]; giving address
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" "; //i[arr] arr[i]
        ptr++;
    }
    ptr = arr;
    *ptr = 8; //ptr[0] = 8
    ptr++; //ptr is pointing 2nd element
    *ptr = 9; 
    ptr--; //ptr is pointing to 1st element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing to 1st element
    cout<<endl<<ptr;
}