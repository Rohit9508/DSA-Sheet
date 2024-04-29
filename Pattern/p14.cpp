#include<iostream>
using namespace std;
void inverted_pyramid(){
    int n=4;
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
    inverted_pyramid();
}