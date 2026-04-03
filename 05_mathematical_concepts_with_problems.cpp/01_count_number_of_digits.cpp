#include<iostream>
using namespace std;


int Count(int num){
    int cnt=0;

    while(num>0){

        int last_digit=num%10;

        cnt= cnt+1;

        num=num/10;


    }


    return cnt;
}
int main(){

    int num;
    cout<<"Enter the number: ";

    cin>>num;

    int ans=Count(num);

    cout<<"The number of digits are :"<<ans;
}