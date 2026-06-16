// NOW WE HAVE TO PRINT THE INPUT NUMBER INTO LINEAR FORM , BUT EARLIER WE ARE DOING USING (I+1), INSTEAD  WE HVE TO NOW 


// 4 ----- 1 2 3 4 // 4 3 2 1 
#include<iostream>
using namespace std;

void f(int i,int n){    
    if(i<1){
        return ;
    }

    f(i-1,n);

    cout<<i;
}
int main(){
    int n;
    cin>>n;

    f(n,n);
}