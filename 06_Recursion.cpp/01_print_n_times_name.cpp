// Goal------  To print name n times using Recursion
// Although we can solve this  through for loop , but for this we are usinng now Recursion

// Time complexity------ O(n) as we are iterating n times here (linear growth)
// Space Complexity -----O(n) maximum depth=O(n+1)=O(n)

// APPROACH------- 1. We have started the counter with 1 to n (1->n)
// 2. Another approach we can apply here is by reversing the iteration means from (n->1)

#include <iostream>
using namespace std;

void f(int i, int n)
{

    // Base Condition
    if (i > n)
    {

        return; // IT WILL STOP THE FUNCTION HERE AND WILL NOT  RETURN ANY VALUE
                // AND WE USE THIS RETURN ONLY IN VOID FUNCTION , WE DOES NOT USE IN NON-VOID FUNCTION AS IN THAT CASE INT OR ANY DATATYPE FUNCTION HAVE TO RETURN ANY VALUE

        /* 1. INCASE OF VOID FUNCTION:-
                               void f(){
                                cout<<"hello";
                                *CORRECT ----->return ;


                                *INCORRECT---->return 0;
                              }

        2. INCASE OF NON-VOIDAL FUNCTION:-
                              int void f(){
                                *CORRECT---> return 0;


                                *INCORRECT----> return ;
                              }
                                */
    }

    cout << "Shobheet" << " ";

    // Recursive call
    f(i + 1, n);
}

int main()
{

    int n;
    cin >> n;

    f(1, n);

    return 0;     
    // ROLE OF THIS RETURN MEANS THAT PROGRAM HAS SUCCESSFULLY RUN...
}

// WE ARE STARTING HERE WITH 1 AS IT IS ACTING AS AN COUNTER WHICH WILL PRINT THE NAME BASED ON NUM (n)GIVEN BY USER,AND WE HAVE NOT TAKEN OR STARTED FROM ZERO BECOZ WE IF START FROM ZERO AND LET'S SUPPOSE WE GIVE N AS 3 THEN THE FLOW WILL LOKKS LIKE THISE:-

// F(O,3)--F(1,3)---F(2,3)---F(3,3)----   {F(4,3)}--> AND THIS WILL STOP HERE AND THIS STEP WILL NOT EXECUTE ...
// SO NOW IF WE COUNT THE NUMBER OF  NAME THAT WILL PRINTED WILL BE 4 BUT WE HAVE TAKEN THE VALUEOF N AS 3 SO THE NAME WILL PRINTED ONE  TIMES MORE THAN THE REQUIRED NUMBER

// ALTHOUGH WE CAN START WITH ZERO BUT THEN WE HAVE TO CHNAGE OUR CONDITION , CURRENTLY THE CONDITION IS (I>N), BUT IF WE HAVE TO START FROM ZERO THEN WE HAVE TO USE THIS CONDITION:-  (I==N)



// SOME DIFFERENCE BETWEEN RETURN AND RETURN 0;

// 1. SIMPLY RETURN; ,MEANS THAT STOP(BASS RUKH JAO), DON'T RETURN ANY VALUE...... JUST EXIT .
// WHEREAS 
// RETURN 0; MEANS RUKO AUR YEH VALLUE LE JAO..... IT USED IN CALCULATION 