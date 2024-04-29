#include<iostream>
using namespace std;
void solve(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n;i>0;i--){
        
        arr[i]=arr[i-1];
        
    }
    arr[0]=temp;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    solve(arr,n);
    //print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}