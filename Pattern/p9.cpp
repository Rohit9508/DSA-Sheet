#include<iostream>
using namespace std;
int main(){
    
    for(int row=5;row>=1;row--){
        int digit=1;
        for(int col=1;col<=row;col++){
            cout<<digit;
            digit++;
        }
        cout<<endl;
    }
}
/*
12345
1234
123
12
1
*/