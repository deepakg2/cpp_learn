#include<iostream>
using namespace std;
int main(){
    int a = 15;
    int* ptr = &a;
    int b = (*ptr)++;  //++ptr pahle value di jati phit icrement hota
    cout<<a<<" "<<b;
}