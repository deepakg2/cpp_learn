#include<iostream>
#include<cmath>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int mini(int x, int y){
    // int a;
    // if(x<y) a = x;
    // else a=y;
    // return a;
    return min(x,y);
}
int main(){
    // cout<<sum(40,63);
    // int x,y;
    // cin>>x>>y;
    // cout<<max(x,y);
    cout<<mini(33,99);
    // cout<<sqrt(9.8);
}