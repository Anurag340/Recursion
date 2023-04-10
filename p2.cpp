// Program to print subsequence in an array for a given sum 

#include<bits/stdc++.h>
using namespace std;

void recurr(int index, vector<int>&container,int arr[],int n, int sum,int s){
    //base case
    if(index==n){ //when we completely traversed the array 
        if(s==sum){
            for (auto it:container){
                cout<<it<<" ";
            }
        }
        cout<<endl;
        return;
    }


//pick condition and sum
container.push_back(arr[index]);
s+=arr[index];
recurr(index+1,container,arr,n,sum,s);
container.pop_back();
s-=arr[index];

//not pick condition
recurr(index+1,container,arr,n,sum,s);

}

int main(){
    int arr[]={4,5,6,9,2};
    int n=5;
    vector<int>container;
    int sum =12;
    int s=0;
    recurr(0,container,arr,n,sum,s);

    }