#include<bits/stdc++.h>

using namespace std;

void reverse(int*arr,int n ,int i,int j){
    //base case
    if(i>=j){
        return;
    }

    swap(arr[i],arr[j]);

    reverse(arr,n,i+1,j-1);

}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(arr,n,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}