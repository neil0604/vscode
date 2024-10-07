#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n-2];
    int k=4;
    int p=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            ans[0]=arr[i];
            p=i;
            break;
        }
        
    }int i=1;
    int j=k;
    while(j<n){
        if(p>i){
            ans[i]=arr[p];
        }else{
            for(int a=i;a<k+p;a++){

                if(arr[a]<0){
                    p=a;
                    ans[i]=arr[a];
                    break;
                }
            }
        }
        i++;
        j++;

    }
    for(int i=0;i<n-k+1;i++){

        cout<<ans[i]<<" ";
    }
    









}