#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    stack<int> st;
    int n=8;
    int ans[8];
    ans[7]=-1;
    st.push(arr[7]);
    for(int i=n-2;i>=0;i--){
        //pop
        while(st.size()!=0 && st.top()<arr[i]){
            st.pop();
        }
        //ans
        if(st.size()!=0) ans[i]=st.top();
        else ans[i]=-1;
        //push
        st.push(arr[i]);


    }
    for(int i=0;i<8;i++){
        cout<<ans[i]<<" ";
    }
}