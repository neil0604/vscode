#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> dtob1(int a){
    vector<int> v(8,0);
    int n=7;
    int ans=0;
    int d=0;
    while(a!=0){
        d=a%2;
        v[n--]=d;
        a=a/2;
    }


    return v;
}
int main(){
    vector<int> v;
    v=dtob1(192);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}