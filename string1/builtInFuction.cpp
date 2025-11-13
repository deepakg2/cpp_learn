#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//    string str = "Deepak is not red";
//    cout<<str.length(); // 0 to str.length()-1
//    int len = str.length();

// string str = "abcde";
// cout<<str<<endl;
// str.push_back('f');
// str.push_back('g');
// cout<<str;\

// string s = "Deepak";
// cout<<s<<endl;
// s.pop_back();
// s.pop_back();
// cout<<s;

// string s = "avc";
// cout<<s<<endl;
// s =  "i" + s ; //add 
// cout<<s;

string s = "Deepak";
cout<<s<<endl;
reverse(s.begin()+2,s.begin()+5);
cout<<s; 
}