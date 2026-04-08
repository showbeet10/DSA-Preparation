// Goal------  To print name n times using Recursion 
// Although we can solve this  through for loop , but for this we are usinng now Recursion

// Time complexity------ O(n) as we are iterating n times here

// APPROACH------- 1. We have started the counter with 1 to n (1->n) 
// 2. Another approach we can apply here is by reversing the iteration means from (n->1)



#include<iostream>
using namespace std;

void f(int i,int n){

    
    // Base Condition
    if (i>n){
        return ;
    }
    
       

    cout<<"Shobheet"<<" ";

    // Recursive call 
    f(i+1,n);
}

int main(){

    int n;
    cin>>n;


    f(1,n);


    return 0;
}


// WE ARE STARTING HERE WITH 1 AS IT IS ACTING AS AN COUNTER WHICH WILL PRINT THE NAME BASED ON NUM (n)GIVEN BY USER,AND WE HAVE NOT TAKEN OR STARTED FROM ZERO BECOZ WE IF START FROM ZERO AND LET'S SUPPOSE WE GIVE N AS 3 THEN THE FLOW WILL LOKKS LIKE THISE:-

// F(O,3)--F(1,3)---F(2,3)---F(3,3)----   {F(4,3)}--> AND THIS WILL STOP HERE AND THIS STEP WILL NOT EXECUTE ...
// SO NOW IF WE COUNT THE NUMBER OF  NAME THAT WILL PRINTED WILL BE 4 BUT WE HAVE TAKEN THE VALUEOF N AS 3 SO THE NAME WILL PRINTED ONE  TIMES MORE THAN THE REQUIRED NUMBER 

// ALTHOUGH WE CAN START WITH ZERO BUT THEN WE HAVE TO CHNAGE OUR CONDITION , CURRENTLY THE CONDITION IS (I>N), BUT IF WE HAVE TO START FROM ZERO THEN WE HAVE TO USE THIS CONDITION:-  (I==N)



