#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutaions(string ans,string original){
    if(original==""){
      cout<<ans<<endl;
      return;
    }
    for(int i=0;i<original.length();i++){
      char ch = original[i];
      string left = original.substr(0,i);
      string right = original.substr(i+1);
      permutaions(ans+ch,left+right);
    }
}
int main(){
   string str = "abc";
   permutaions("",str);
   // c ka idx hai 2, string len = 5 (0-4)
   // string left = str.substr(0,2);
   // cout<<left<<endl;
   // string right = str.substr(2+1);
   //cout<<right<<endl;
}