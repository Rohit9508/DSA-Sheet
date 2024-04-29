//inverted triangle
#include<iostream>
using namespace std;
int main(){
    for(int Row=5;Row>=1;Row--){
        for(int col=1;col<=Row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*

*****
****
***
**
*

*/