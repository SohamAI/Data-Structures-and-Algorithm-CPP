/**
 Name : Soham K Mhatre
 Date : 17-06-2024
 Topic : To Understand the Basics of C++ (Revision)
 */

#include<iostream> // include the input-output stream Library
using namespace std; // use the standard namespace which includes Objects like cin , cout , etc

int main(){ //--> the program in C++ starts From the main Function

    // --> First Program : 
    cout<<"Hello World"<<endl; // --> using cout we can output the results in terminal

    //---------------------------------------------------------------------------------------

    // Variables : Variables are the Container in which the values are stored, each variable has a location, Type and Value.

    int a = 10; // --> here , int is integer , a is variable name and 10 is the value is assigned.

    //---------------------------------------------------------------------------------------


    // datatypes : The Data types are the Types of Data for eg integer, string, char, bool, 

    /*
    Types Of datatypes : (Primitive Data Types : )
    1) int : integer which store Integer value
    2) unsigned int : only stores non-negative values
    3) float : stores decimal values
    4) double : stores more precised Floating Numbers
    5) long : stores bigger values of Integer
    6) long long: stores more bigger values than long
    7) char : Stores Single Character value eg 'a'
    8) string : stores the combination of Characters
    9) boolean : stores the Values like true and false

    (Derived Data types : )
    these are the datatypes Which are Derived from the Basic Primitve Data Types.
    eg, Array, Pointers, Reference, Functions
    we will look at this later on..

    (User Defined Data Types : )
    These are the Types of Data which are defined by the user...
    Structure, Union , Enumeration, Classes, 

    */

   // Implementation of Primitive Data Types : 
   int a1 = 10;
   unsigned int b = 100;
   float c = 10.0;
   double d = 10.01;
   long e = 23113111;
   long long f = 2131231231231;
   char g = 'a';
   string h = "Hello world";
   bool i = true;


   cout<<a1<<endl<<b<<endl <<c<<endl <<d<<endl <<e<<endl <<f<<endl <<g<<endl <<h<<endl <<i <<endl;


    //---------------------------------------------------------------------------------------
    
    //Conditionals and Decision Making : 
    /*
        Conditionals and Decision Making are the statements that are used to make the decisions and Define Different Paths Based on the Conditions.

        It consist of Following Statements : 
        1) if - else
        2) if else if ladder (nested if - else)
        3) switch case

        here the Conditionals Operators Are Mostly used : > , < , == , >= , <=, ?
        == is Used for the Equality Check
        ? is the ternary Operator used for the Short hand of the If else Conditionls.
    */

    // implementing if - else statements :
    // explaination : if the a2>=10 condition is satisfied then only that part is Executed , if not then the else part is executed.

    int a2 = 10;

    if(a2 >= 10){
        cout<<"the Number is 10 or Greater than 10"<<endl;
    }
    else{
        cout<<"The Number is less than 10"<<endl;
    } 

    // implementing if - else if (nested if-else) statements :
    // if the first Condition is Not Executed it will check for the next Condition and If all the Conditions are not Satisfied then only the else part is Executed.

    if(a2 >= 10){
        cout<<"the Number is 10 or Greater than 10"<<endl;
    }
    else if(a2 >= 20){
        cout<<"the Number is 20 or Greater than 20"<<endl;
    }
    else{
        cout<<"The Number is smaller than 10"<<endl;
    }

    // Implementing switch case statements : 
    // Switch case is different , it has multiple cases and based on the input it decides which switch case to execute.

    char a3 = 'a';

    switch(a3){
        case 'a':
            cout<<"its monday"<<endl;
            break;
        case 'b':
            cout<<"its Tuesday"<<endl;
            break;
        case 'c':
            cout<<"its Wednesday"<<endl;
            break;
        case 'd':
            cout<<"its Thursday"<<endl;
            break;
        case 'e':
            cout<<"its Friday"<<endl;
            break;
        case 'f':
            cout<<"its Saturday"<<endl;
            break;
        case 'g':
            cout<<"its Sunday"<<endl;
            break;
        default: //--> Its Executed When There is No Case Matching
            cout<<"Its dryday"<<endl;

    }

    // so here whats happening that whichever case is Matched it Executes all the Consecutive cases Below that, thats why its important to use the break statements in the Cases , 
    // break is used to come out the Switch Statement, its More explained in the loops.

    //---------------------------------------------------------------------------------------

    // Looping in C++ : 
    /*
         The Loops are the Components which Help to execute the Same Logic for the Number of times.

         the Loops are Divided in 3 types : 
         
         1) While Loop : While Loop runs the Logic for the Given Number of times.
         the Control flow is : check the condition --> run the code --> Check the condition ....

         2) do while loop :
          this is similar to the while loop but it Executes the Code first and then Checks the condition
          the control flow of do while loop is : 
          execute first --> check the condition --> execute code.....
          due to this Behaviour , it runs at least once...

        3) for loop : 
         the task is Similar to the first two Loops, to run the Logic(code) for the Given Number of times..
         the difference is in the Control Flow : 
         initialization of counter --> check the condition --> execute the code --> increment the counter --> check the condition ....

        ** its Important to increase the counter as if the counter is Not Incremented or the termination Condition is Not Handled Properly than it can lead it to the Infinite Loop , Freezing up the computer resources... which is not at all recommended.
    */

   //Implementation of the loops : 

   /*
    here we have make use of the Increment and Decrement operators : 
    var++ --> post Increment Operator means use the value of variable first and then increment it.
    ++var --> pre Increment Operator means increment the Variable first and then use it

    similarly there are Post and Pre Decrement Operators : var--, --var
   */

   //while loop :
    int l1 = 0;
    while(l1 < 10){
        cout<<l1++<<" ";
    }
    cout<<endl;

    //do while loop:
    int l2 = 0;
    do{
        cout<<++l2<<" ";
    }
    while(l2<10);
    cout<<endl;

    //for loop : 
    for(int i = 1; i<=10; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    /*
        Print the Given Pattern : 
        *
        **
        ***   
    */

    int stP;
    cout<<"How Many Rows of Stars You have to Print : ?"<<endl;
    cin>>stP;

    for(int i = 0; i<stP; i++){ //--> for rows
        for(int j = 0; j<=i; j++){ //--> for Printing Stars
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //---------------------------------------------------------------------------------------

    
    //Go To the Part 2 of the File for Further Learnings : 

    return 0; //--> returns the 0 from the main function indicating the program was successfully executed
}