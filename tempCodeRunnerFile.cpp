#include<iostream>
#include<vector>
#include<string>
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

    string s;
    vector<int> v;
    vector<vector<int>> v1;
    cin>>s;
    s=s+'.';
    string ans;
    int i=0;
    while(s[i]!='\0'){
        

        if(s[i]=='.'){
            int a=stoi(ans);
            ans="";
            v=dtob1(a);
            v1.push_back(v);
        }
        else ans=ans+s[i];
        i++;
    }

    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1[0].size();j++){
            cout<<v1[i][j];
        }
        if(v1.size()!=i+1) cout<<".";
    }
}