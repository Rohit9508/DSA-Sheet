#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            if((row+col)%2==0)
            cout<<" 1 ";
            else
            cout<<" 0 ";
        }
        
        cout<<endl;
    }
}
/*
 1 
 0  1 
 1  0  1 
 0  1  0  1
 1  0  1  0  1

*/