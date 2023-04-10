// Program to print subsequences in an array or to print the subsets of a set

#include<bits/stdc++.h>
using namespace std;

void recurr(int index, vector<int>&container,int arr[],int n){
    //base case
    if(index==n){ //when we completely traversed the array 
        for (auto it:container){
            cout<<it<<" ";
        }
        if(container.size()==0){
            cout<<"{}"<<" ";   // to print the null subsequence
        }
        cout<<endl;
        return;
    }


//pick condition
container.push_back(arr[index]);
recurr(index+1,container,arr,n);
container.pop_back();

//not pick condition
recurr(index+1,container,arr,n);

}

int main(){
    int arr[]={4,5,6,9,2};
    int n=5;
    vector<int>container;
    recurr(0,container,arr,n);

    }