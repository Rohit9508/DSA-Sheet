#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=n;row>=1;row--){
        //spaces
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            if(col==1 || col==row)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
/*

*     * 
 *   * 
  * * 
   * 

*/