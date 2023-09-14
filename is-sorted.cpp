#include<bits/stdc++.h>

using namespace std;

bool sorted(int *arr,int n,int i){
    if(i==n-1){
        return true;
    }

    if(arr[i+1]<arr[i]){
        return false;
    }

    return sorted(arr,n,i+1);
}

int main(){
    int arr[6]={5,6,7,8,9,10};
    bool ans=sorted(arr,6,0);
    cout<<ans;

}