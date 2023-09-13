#include<bits/stdc++.h>

using namespace std;

int power(int a,int n){
    //base case
    if(n==0){
        return 1;
    }
    if(n&1){
        return a*(power(a,(n-1)/2)*power(a,(n-1)/2));
    }
    else{
        return(power(a,n/2)*power(a,n/2));
    }
}

int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    int ans=power(a,n);
    cout<<ans;
}