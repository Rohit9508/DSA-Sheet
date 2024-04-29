#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=4;row++){
        for(int j=1;j<=4-row;j++){
            cout<<" ";
        }
        for(int j=1;j<=row;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
   *
  **
 ***
****
*/