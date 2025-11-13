#include<iostream>
using namespace std;
void display(int a[],int size){ //int* a;  pssing a address
   for(int i=0;i<=size-1;i++){
      cout<<a[i]<<" ";
   }
   cout<<endl;
   return;
}
void change(int b[], int size){ //int* b;
   b[0]=100;
}
int main(){
   int arr[5] = {1,3,4,8,5};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<size<<endl;
   //accessing the elements of array in another funcion
   // updation, pass by value / refernce?

      display(arr,size); //funcion calling
      change(arr,size);
      display(arr,size);
      // that's a refernce
      //address bahjte hai 
}