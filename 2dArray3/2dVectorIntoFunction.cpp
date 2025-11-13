#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector<vector<int> > &v){
    v[0][1]=100;
}
int main(){
     vector<int> v1; //1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; //4 5
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; //6 7 8 9 10
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);

    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;
    change2dvector(v);
    cout<<v[0][1];
}