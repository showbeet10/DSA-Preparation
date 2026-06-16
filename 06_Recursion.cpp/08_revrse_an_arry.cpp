#include<iostream>
using namespace std;


int rev_arr(int l, int r){

    if(l>=r){
        return;
    }

    swap(arr[l],arr[r]);
    rev_arr(l+1,r-1);


}
int main(){

    int n;
    cin>>n;

    int arr[n];

    for (int i=0;i<=n;i++){

        cin>>arr[i];
    }

    for (int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    rev_arr(0,n-1);



}