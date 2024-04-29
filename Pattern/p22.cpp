#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=2*row-1;col++){
            if(col==1){
                cout<<col;
            }
            else if(col==2*row-1){
                cout<<row;
            }
            else if(row==n){
                cout<<col;
            }
            else{
                cout<<"_";
            }   
        }
        cout<<endl;
    }
}