#include<bits/stdc++.h>

using namespace std;

void subset(string arr,int i,int n,vector<string>&ans,string output){
    //base case
    if(i==n){
        if(output.length()>0)ans.push_back(output);
        
        return;
    }

    //exclude
    subset(arr,i+1,n,ans,output);

    //include
    char inc=arr[i];
    output.push_back(inc);
    subset(arr,i+1,n,ans,output);


}

int main(){
    string arr="abc";
    vector<string>ans;
    string output="";
    subset(arr,0,3,ans,output);

    for(auto it:ans){
        cout<<it<<endl;
    }

}