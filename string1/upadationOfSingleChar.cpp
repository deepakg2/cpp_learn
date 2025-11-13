#include<iostream> 
#include<string>
using namespace std;
int main(){
    // string str = "Deepak Gangwar";
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    cout<<str<<endl;
    // str[1]='r';
    // kaam
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;
}