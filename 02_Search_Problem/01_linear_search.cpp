#include<iostream>
using namespace std;


int linearSearch(int arr[], int n, int key){


    for(int i=0;i<n;i++){

        if(arr[i]==key){
            return 1;
        }

        else {
        return -1;
    }

    }
    
}
int main(){
    int n , key ;

    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];


    cout<<"enter "<<n<<"elements"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter element to search "<<endl;

    cin>>key;

    int result = linearSearch(arr,n,key);

    if(result!=-1){
        cout<<"element found at index "<<result<<endl;

    }
    else{
        cout<<"Not found "<<endl;
    }

    return 0;
}