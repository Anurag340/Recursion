#include<bits/stdc++.h>

using namespace std;

int quick(int *arr,int s,int e){
        int i=s;
        int j=e;
        int p=arr[s];
  while(arr[j]>p){
    j--;
  }

  swap(arr[i],arr[j]);
  return j;
}




void quicksort(int *arr,int s ,int e){
    //base case
    if(s>=e)return;

    //recursive calls
    for(int i=0;i<=5;i++){
        int p=quick(arr,s,e);

    //leftpart
    quicksort(arr,s,p-1);

    //rightpart
    quicksort(arr,p+1,e);

    }

    


}

int main(){
    int arr[6]={40,10,30,80,60,50};

    int ans[6];

    quicksort(arr,0,5);

    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
}