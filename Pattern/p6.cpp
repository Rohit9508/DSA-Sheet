#include<iostream>
using namespace std;
int main(){
    int end=6;
    for(int row=1;row<=end;row++){
        for(int col=1;col<=end;col++){
            if(row==1 || col==1)
            cout<<"* ";
            else if(col==end || row==end)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
/*  
   * * * * *
   *       *
   *       *
   *       *
   * * * * *
*/