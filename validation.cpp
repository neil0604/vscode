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
    bool flag=true;
    int c=0;
    while(s[i]!='\0'){
        if(s[i]=='.') {c++;
        ans="";}
       else if(isdigit(s[i]) )
        ans=ans+s[i];
        else {
           flag=false;
            break;
        }
        if(s[i+1]=='.'){
           // if(isalpha(ans))
            int a=stoi(ans);
            if(a>=0 && a<=255){
            string k=answer(a);
           // cout<<endl<<k;
            }
            else{
                flag =false;
            }
        }
        

        i++;
    }
    if(c!=3){
            flag=false;
        }
        if(flag==false){
            cout<<endl<<"validation error";
        }
        else cout<<"valid";
}