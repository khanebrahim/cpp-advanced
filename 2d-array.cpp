#include<iostream>
using namespace std;
int main(){
    int A[2][3];
    for(auto & X:A){
        for(auto & y:X){
            cin>>y;
        }
        cout<<endl;
    }
    for(auto &X:A){
        for(auto & y:X){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}