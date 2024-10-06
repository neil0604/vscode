#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxi=-10000;
    int sumwindow=0;
    //sum of first k elements 
    for(int i=0;i<k;i++){
        sumwindow+=arr[i];
    }
    //sliding window
    cout<<sumwindow;
    cout<<endl;
    int i=1;
    int j=k;
    int currentsubarray=0;
    int idx=-1;
    int answer=sumwindow;
    while(j!=n){
        sumwindow=sumwindow+arr[j]-arr[i-1];
        
      //  maxi=max(currentsubarray,maxi);
        if(sumwindow>answer){
            idx=i;
            answer=sumwindow;
        }
        
        i++;
        j++;

    }
    cout<<answer<<endl<<endl<<idx;

}