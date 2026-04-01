#include<iostream>
using namespace std;

/*

We have to print the the ouput like this :-

1 2 3 
1 2 3 
1 2 3

*/

int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;

                /*in order to print these number in reverse we will use this simple formula -----  (n-j+1 )*/

            j=j+1;


        }

        cout<<endl;
        i=i+1;
    }
}