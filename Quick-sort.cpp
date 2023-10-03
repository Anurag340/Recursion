#include<bits/stdc++.h>

using namespace std;

int quick(int *arr,int s,int e){
    int p=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<p){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);

    return i+1;
}



void quicksort(int *arr,int s ,int e){
    //base case
    if(s>=e)return;

    //recursive calls

    int p=quick(arr,s,e);

    //leftpart
    quicksort(arr,s,p-1);

    //rightpart
    quicksort(arr,p+1,e);


}

int main(){
    int arr[5]={10,5,30,15,7};

    int ans[5];

    quicksort(arr,0,4);

    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}