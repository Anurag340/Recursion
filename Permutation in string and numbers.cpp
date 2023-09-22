#include<bits/stdc++.h>
using namespace std;

void permute(string a,int index,vector<string>&ans){
    //base case
    if(index==a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=index;i<a.size();i++){
        swap(a[i],a[index]);
        permute(a,index+1,ans);
        swap(a[i],a[index]);
    }
}

int main(){

    string a="abc";
    vector<string>ans;
    permute(a,0,ans);

    sort(ans.begin(),ans.end());

    for(auto it:ans){
        cout<<it<<endl;
    }

 }
