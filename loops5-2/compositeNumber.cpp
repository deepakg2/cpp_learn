#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = true;  // true means prime
    for(int i=2;i<n;i++){
        if(n%i==0){ //i is a factor of n 
            flag = false; // false means composite
            break;                                      //BREAK statement
        }
    }
    // 1 2 3 4 5 6 
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
}