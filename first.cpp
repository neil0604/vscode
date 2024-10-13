#include<iostream>
#include<string>
using namespace std;
string answer(int a){
    if(a>=0 && a<=191){
        return "class A";
    }
    else if (a>191 && a<=300)
    {
       return "class B";
    }
    
}
int main(){
    string s;
    cin>>s;
    int i=0;
    string ans;
    while(s[i]!='.'){
        if(isdigit(s[i]))
        ans=ans+s[i];
        else {
            cout<<"enter valid ip address";
            break;
        }
        if(s[i+1]=='.'){
           // if(isalpha(ans))
            int a=stoi(ans);
            string k=answer(a);
            cout<<endl<<k;
        }


        i++;
    }
}