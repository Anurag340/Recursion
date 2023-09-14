#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int *arr,int n,int i){
    if(i==n){
        return;
    }

    if(arr[1]<=arr[0]){
        swap(arr[i],arr[i+1]);
    }

    return bubble_sort(arr+1,n-1,i);
}

int main(){
    int arr[6]={8,2,1,3,10,9};
    for(int i=0;i<6;i++){
        bubble_sort(arr,6,0);

    }

    for(auto it:arr){
        cout<<it<<" ";
    }

}