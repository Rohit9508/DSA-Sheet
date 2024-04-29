#include<iostream>
using namespace std;
void full_pyramid(){
    int n=8;
    for(int row=1;row<=n;row++){
        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=n;row>=1;row--){
        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        //star
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    full_pyramid();
}