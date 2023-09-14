#include<bits/stdc++.h>

using namespace std;

void subset(int arr[],int i,int n,vector<vector<int>>&ans,vector<int>output){
    //base case
    if(i==n){
        ans.push_back(output);
        return;
    }

    //exclude
    subset(arr,i+1,n,ans,output);

    //include
    int inc=arr[i];
    output.push_back(inc);
    subset(arr,i+1,n,ans,output);


}

int main(){
    int arr[3]={1,2,3};
    vector<vector<int>>ans;
    vector<int>output;
    subset(arr,0,3,ans,output);

    for(const auto &i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}