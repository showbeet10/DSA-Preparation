#include<iostream>
using namespace std;

void f_sum(int i,int sum){

    if(i<1){
        
        cout<< sum;       problem heree
        // return ;
        
    }

    f_sum(i-1,sum+1);

}
int main(){
    int n;
    cin>>n;

    f_sum(n,0);
}