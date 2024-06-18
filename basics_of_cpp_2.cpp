/*
Name : Soham K Mhatre
Date : 18-06-2024
Purpose : Revising the basic Topics of the CPP...
*/

#include<iostream>
using namespace std;

//Functions and Types of Functions : 

    /*
        The functions are The Programming Components Which Allows us to Reuse the Logic At various Places and Number of times.

        ** the Loops are used to Run the logic for the Given number of times but at a same instance or at that time only

        **We Write the Functions Once and Then we can Call it at various Places by just Calling its name

        **its Utilizes the Programming Principle known as DRY --> Do not Repeat Yourself

        the Functions consist of Two Parts --> Function Defination and function call

        the syntax is : <Return-Datatype> <function name> (<Parameters>){
            <code Logic>...
        }
    */

//Simple Function Implementation : 

void greet(){ //--> Void means It Returns Nothing.
    cout<<"Good Morning"<<endl;
}

//lets Understand More about Functions : 
int Add(int number1, int Number2){ 
    
    //--> here we have Defined the Return Data type of the Function i.e int , and the paramters are the variables or like Fill in the blanks where we fill the values of the Defined Variables.


    return (number1 + Number2);

    //--> at a time the return can give only one Value.
    //--> return means Return to the main function/ Give control to the Main Function.
}

bool isEven(int Number1){
    if(Number1 % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    greet(); //--> Function call
   
   //we can call the Function For n Number of times.
    for(int i = 0; i<10; i++){
        greet();
    }
    
    //Function Call of the Add Function
    cout<<Add(10,20)<<endl;

    if(isEven(12)){
        cout<<"The Given Number is Even"<<endl;
    }
    else{
        cout<<"The Given Number is Odd"<<endl;
    }

    //---------------------------------------------------------------------------------------

    //Pointers : The Pointers are the Variables That Point to the Other Variables . i.e The Pointers are the Type of the Variables Which Reference / point to the Other Variables By Storing their Location Address.

    //The Pointers are Defined Like this.

    int a = 10; //--> Normal Variable which has value 10.
    int *b = &a; //--> pointer Variable which has Address of a which has value 10.

    cout<<"a : "<< a<<endl;
    cout<<"Address of a : "<<&a<<endl; //--> & is used to store/access the address of variable.
    cout<<"Address of b : "<<&b<<endl;
    cout<<"Value at a : "<<*(b)<<endl; //--> * is (value at operator) which is used to access the value of the pointed address
    cout<<"Value at Address of b : "<<*(&b)<<endl; //--> Value at Address of b is address of A.
    cout<<"Value of Address Present at Address of b : "<<*(*(&b))<<endl; //--> value at b = address of a , value at address of a, which is 10.


    // call By Value and call by reference : 
    
    




    return 0;

}