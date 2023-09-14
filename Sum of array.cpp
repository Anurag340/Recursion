#include<bits/stdc++.h>

using namespace std;

int sum(int*arr,int n ,int j){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    j++;
    cout<<j<<n<<endl;
    int ans=arr[0]+sum(arr+1,n-1,j);
    cout<<j<<n<<endl;
    return ans;

}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int j=0;
    int ans=sum(arr,n,j);

    cout<<ans<<endl;
    cout<<j<<endl;

}