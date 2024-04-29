#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int left=0;
    int right=size-1;
    
    while(left<=right){
        int temp=arr[right];
        arr[right]=arr[left];
        arr[left]=temp;

        left++;
        right--;

    }
}

//print Extreme
void extremeArray(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(right==left){
            cout<<arr[left];
        }
       else{
         cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
       }

        left++;
        right--;
    }
}

void printArray(int arr[] , int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    //reverseArray(arr,5);
    extremeArray(arr,7);
    //printArray(arr,6);
}