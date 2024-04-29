#include<iostream>
using namespace std;
int main(){  
    int arr[10]={1,0,1,2,0,2,1,1,0,0};
    int n=10;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0 || arr[i]==1){
            count=count+1;
        }
    }
    cout<<"enter :"<<count;
}