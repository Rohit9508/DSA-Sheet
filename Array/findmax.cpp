//find the max element
#include<iostream>
#include<limits.h>
//#include<utility>
using namespace std;
void print_array(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int  find_Max(int arr[][4],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
        
    }
    return max;
}
int find_Min(int arr[][4],int row,int col){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
        
    }
    return min;
}
void row_wisesum(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}
void col_wisesum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }
}
//find transpose of matrix ||row <---> column
void transpose(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
int main(){
    int arr[][4]={
                    {10,2,3,4},
                    {5,6,7,8},
                    {9,10,11,1},
                    {4,3,6,8}
                };
            int row=4;
            int col=4;
        //    cout<<"the max number is : "<<find_Max(arr,row,col)<<endl;
        //    cout<<"the min number is : "<<find_Min(arr,row,col)<<endl;
        print_array(arr,row,col);
        cout<<endl;
         transpose(arr,row,col);    
         print_array(arr,row,col);      
}