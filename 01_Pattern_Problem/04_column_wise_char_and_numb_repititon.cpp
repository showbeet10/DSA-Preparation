#include<iostream>

using namespace std;

/*
we have to print the ouput like this :-

    1 2 3 
    1 2 3
    1 2 3 

*/


/*
int main(){
    int n ;
    cin>>n;
    
    int row=1;

    while(row>=n){
        int col=1;

        while(col<=n){
            cout<< 1 + (col-1);

            col++;
        }

        cout<<endl;
        row++;
    }
}

*/


/*
Here we have to print :-

    A B C 
    A B C
    A B C


*/

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row>=n){
        int col=1;

        while(col<=n){
            char ch =  'A'+ (col-1);

            cout<<ch<<" ";

            col++;
        }

        cout<<endl;
        row++;
    }
}
