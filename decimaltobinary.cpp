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
    vector<int> dtob;
    vector<vector <int>> v1;
    cin>>s;
    s+='.';
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
            //    cout<<endl<<a<<endl;
          //  string k=answer(a);
             dtob=dtob1(a);
           // cout<<endl<<k;
           v1.push_back(dtob);
            }
            else{
                flag =false;
            }
        }
        

        i++;
    }
    if(c!=4){
            flag=false;
        }
        if(flag==false){
            cout<<endl<<"validation error";
        }
        else {cout<<"valid"<<endl;

        }
      // cout<<v.size();


        if(flag){
            for(int i=0;i<v1.size();i++){
                for(int j=0;j<v1[0].size();j++){
                    cout<<v1[i][j];
                }
               if(v1.size()!=i+1) cout<<".";
            }
}
}      
