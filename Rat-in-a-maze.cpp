#include<bits/stdc++.h>

using namespace std;

void ratinmaze(int x ,int y, int maze[5][5],string output, vector<string>&ans,int vis[5][5]){
   
    //base case

    if(x==4 && y==4){
        ans.push_back(output);
        return;
    }

    vis[x][y]=1;

    int newx=x;
    int newy=y;

    //down
    newx=x+1;
    newy=y;
    if(newx>=0 && newy>=0 && newx<5 && newy<5 && vis[newx][newy]==0 && maze[newx][newy]==1){
        output.push_back('D');
        ratinmaze(newx,newy,maze,output,ans,vis);
        output.pop_back();
    }


    //up
    newx=x-1;
    newy=y;
    if(newx>=0 && newy>=0 && newx<5 && newy<5 && vis[newx][newy]==0 && maze[newx][newy]==1){
        output.push_back('U');
        ratinmaze(newx,newy,maze,output,ans,vis);
        output.pop_back();
    }


    //right
    newx=x;
    newy=y+1;
    if(newx>=0 && newy>=0 && newx<5 && newy<5 && vis[newx][newy]==0 && maze[newx][newy]==1){
        output.push_back('R');
        ratinmaze(newx,newy,maze,output,ans,vis);
        output.pop_back();
    }


    //left
    newx=x;
    newy=y-1;
    if(newx>=0 && newy>=0 && newx<5 && newy<5 && vis[newx][newy]==0 && maze[newx][newy]==1){
        output.push_back('L');
        ratinmaze(newx,newy,maze,output,ans,vis);
        output.pop_back();
    }


    vis[x][y]=0;

}

int main(){

    int maze[5][5]={{1,0,0,0,0},{1,1,0,0,0},{0,1,0,0,0},{0,1,1,1,1},{0,0,1,1,1}};

    int vis[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            vis[i][j]=0;
        }
    }

    int x=0,y=0;

    string output="";

    vector<string>ans;

    ratinmaze(x,y,maze,output,ans,vis);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;


}
