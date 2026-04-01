#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int i= 2;

    // if(i<=n){
    //     for(i=2;i<=n;i=i+2){
    //         cout<<i;

    //     }
    // }

    // else{
    //     cout<<"end";

    // }


        if((i<=n) & (i%2==0))
        {
            cout<<i;
            i++;
        }

    else{
            cout<<i;
        }
    




    return 0;
}

