#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=1;row<=4;row++){
        //inverted pyramid 1
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        //spaces
        for(int col=1;col<=2*row-1; col++){
            cout<<" ";
        }
        //invrted pyramid 2
        for(int col=1;col<=n-row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=1;row<=4;row++){
        //pyramid-1
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        //space
        for(int col=1;col<=2*n-2*row+1;col++){
            cout<<" ";
        }
        //pyramid-2
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
} 
/*
* * * *   * * * * 
* * *       * * *
* *           * *
*               *
*               *
* *           * *
* * *       * * * 
* * * *   * * * *

*/