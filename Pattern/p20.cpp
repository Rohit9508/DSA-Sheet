#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=4;row++){
        for(int col=1;col<=2*row-1;col++){
            if(col %2 == 0){
                cout<<"*";
            }else{
                cout<<row;
            }
        }
        cout<<endl;
    }
}