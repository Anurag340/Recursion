#include<bits/stdc++.h>

using namespace std;

void keypad(string inp , string map[],string output , vector<string>&ans,int index){
    //base case
    if(index>=inp.size()){
        ans.push_back(output);
        return;
    }

    int number=inp[index] - '0';
    string values=map[number];

    for(int i=0;i<values.size();i++){
        output.push_back(values[i]);

        keypad(inp,map,output,ans,index+1);

        output.pop_back(); //backtrack
    }
}

int main(){
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string inp;
    cin>>inp;

    string output="";
    vector<string>ans;

    keypad(inp,map,output,ans,0);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}