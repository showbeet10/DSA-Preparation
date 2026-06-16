#include<iostream>
using namespace std;
// 3---- 3 2 1 

void f(int i,int n){

    if(i<1){
        return ;
    }

    cout<<i;
    f(i-1,n);

}
int main(){

    int n;
    cin>>n;

    f(n,n);

    return 0;
}
