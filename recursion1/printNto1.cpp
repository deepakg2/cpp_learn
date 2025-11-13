#include<iostream>
using namespace std;
void print(int n){
//     cout<<n<<endl;
//      if(n==1) return 1;
//    if(n>0) return print(n-1);
//base case
if(n==0) return;
cout<<n;
print(n-1); //call

}
int main(){
    print(6);
}