//triangle pattern
#include<iostream>
using namespace std;
void inverted_pattern(){
    for(int Row=5;Row>=1;Row--){
        for(int col=1;col<=Row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //inverted_pattern();
}