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



// Time Complexity-----> O(log10(n))
//Becoz whenever there is division happens our time complexity comes in Log and as we have divide the number by 10 , so the base will come as 10 ...
//SUPPOSE IF WE DIVIDE THE NUMBER BY 7 THEN THE BASE WILL BECOME 7 BUT OUR TIME COMPLEXITY WILLL  ALWAYS BE IN LOG 

