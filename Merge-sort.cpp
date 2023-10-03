#include<bits/stdc++.h>

using namespace std;

void merge(int *arr,int s,int l){
    int mid=(s+l)/2;

    int lsize=mid-s+1;
    int rsize=l-mid;

    int *larr=new int[lsize];
    int *rarr=new int[rsize];

    //copying of values int left and right array 

    int k=s;
    for(int i=0;i<lsize;i++){
        larr[i]=arr[k++];
    }

    for(int i=0;i<rsize;i++){
        rarr[i]=arr[k++];
    }

    int li=0;
    int ri=0;
    k=s;
    while(li<lsize&&ri<rsize){
        if(larr[li]<rarr[ri]){
            arr[k++]=larr[li++];
        }
        else{
            arr[k++]=rarr[ri++];
        }
    }

    //if in any part there are remaining elements--> happens if one array is bigger than other

    while(li<lsize){
        arr[k++]=larr[li++];
    }

    while(ri<rsize){
        arr[k++]=rarr[ri++];
    }
}

void mergesort(int *arr,int s ,int l){
    //base case

    if(s>=l)return;

    // recursive call

    int mid=(s+l)/2;
    //left array
    mergesort(arr,s,mid);
    //right array
    mergesort(arr,mid+1,l);

    merge(arr,s,l);


}

int main(){
    int arr[5]={10,5,30,15,7};

    int ans[5];

    mergesort(arr,0,4);

    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}