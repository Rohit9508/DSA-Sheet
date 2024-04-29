#include<iostream>
using namespace std;
int main(){
    int end=4;
    char ch='A';
    for(int row=1;row<=end;row++){
        for(int col=1;col<=row;col++){
            cout<<ch ;
            ch++;
        }
        cout<<endl;
        
    }
}
/*
A
BC
DEF
GHIJ
*/