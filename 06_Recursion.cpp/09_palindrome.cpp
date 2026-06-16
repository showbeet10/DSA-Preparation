#include<iostream>
using namespace std;

bool palind_fun(int i,string &s){               // what is differnece between if we write normal s and with the refernece & 

    if(i>=s.size()/2) {
        return true;
    }

    if(s[i]!=s[s.size()-i+1]){
        return false;
    }


    return palind_fun(i+1,s);

}
int main(){

    string s;
    cin>>s;

    cout<<palind_fun(0,s);

    return 0;
}

