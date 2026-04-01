#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rows =1 ;

    while(rows<=n){

        int col=1;

        while(col<=rows){

            cout<<"*";
            col++;
        }


        cout<<endl;
        rows++;
    }
}