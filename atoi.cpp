#include<iostream>
#include<string>
using namespace std;
int myAtoi(string s) {
        int idx=-1;
        int x=0;
        while(s[x]==' '){
            idx=x;
            x++;
        }
        int n=s.size();
    char arr[n-idx-1];
    int i=0;
    bool minus=false;
    bool plus=false;
    if(s[i]=='-'){
        i++;
        minus=true;
    }else if(s[i]=='+'){
        i++;
        plus=true;
    }

    while(s[i]!='\0'){
        arr[i]=s[i];
        i++;

    }

    int a= atoi(arr);
    return a;
    }

int main(){
   int a=myAtoi("  -42");
   cout<<a+1;
}
