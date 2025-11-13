#include<iostream> 
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    //reverse first half
    int n = s.length();
    // reverse(s.begin(),s.begin()+n/2);
     reverse(s.begin(),s.end());
    cout<<s;
}