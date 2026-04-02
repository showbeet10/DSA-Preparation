// GOAL --- TO UNDERSTAND THE SWITCH CASE 
// DEF--- SWITCH CASE IS NOT LOOP , IT IS JUST A DECISION MAKING OR SELECTION STATEMENT....



#include <iostream>


using namespace std;

int main(){

    int day;
    cout<<"Enter the day: ";
    cin>>day;

    cout<<"Day is : ";
    switch(day){               // AS I CAN ONLY USE THAT VARIABLE WHICH I HAVE TO CHECK, EXPRESSION HERE CANN BE INT, CHAR, ENUM OR CONSTANT 

        case 1:                     // VALUE IN CASE SHOULD BE CONSTANT ALWAYS , VARIABLE CAN'T BE USED 
                cout<<"Monday";
                break;               

    // WE USE BREAK AFTER WRITING EACCH CASE BECOZ IF WE DON'T WRITE THIS , THEN THE CODE OF NEXT CASE ALSO GET'S PRINTED 

    // NOTE: WE DOES NOT USE CONTINUE IN SWITCH , CONTINUE ONLY WORKS IN LOOPS LIKE FOR LOOP, WHILE OR DO-WHILE LOOP
    // CONTINUE---- IT TELLS TO MOVE TO NEXT ITERATION BY LEAVING THAT ONE 
        

        case 2:
            cout<<"Tues";
            break;

         case 3:
            cout<<"Wed";
            break;

         case 4:
            cout<<"Thurs";
            break;


         case 5:
            cout<<"Fri";
            break;


         case 6:
            cout<<"SAt";
            // break;
            // break;

         case 7:
            cout<<"Sun";
            break;
            // break;


        /* 1.IF WE DON'T WRITE BREAK IN ANY CASE ,LET'S  UPPOSE IF WE HAVE NOT WRITTEN THE BREAK IN '6' AND '7' CASE THEN IT WILL PRINT SAT , SUN AND ALSO THE OUTPUT OF DEFAULT CASE ...

        2. AND IF WE DON'T WRITE BREAK IN '6' CASE BUT IT IS WRITTEN IN THE 7TH ONE , THEN OUTPUT WILL ONLY SHOW SAT AND SUN , IT WILL NOT GO TO THE DEFAULT ONE , AS THERE IS BREAK WRITTEN IN CASE 7 AND THE COMPILER WILL BREAK OR STOP THERE AND WILL  NOT GO TO THE NEXT ONE ....

        */

        default:
            cout<<"Invalid ";

        // AT LAST OF THE CODE WE CAN ALSO USE THE DEFAULT SO IF USER TYPE OOTHER NUMBER THAN THAT OF REGISERED CASE , THEN IT WILL SHOW INVLAID TO THE USER ......
        // AND IT IS COMPLETELY OPTIONAL STEP 
        
                                    


    }
}