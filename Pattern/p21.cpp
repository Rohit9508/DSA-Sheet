#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int row=n;row>=1;row--){
        for(int col=1;col<=row;col++){
            if(row== 1 || row==n ||col==1 || col==row){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/*

******
*   *
*  *
* *
**
*

*/