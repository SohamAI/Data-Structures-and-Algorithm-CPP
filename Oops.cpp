/*
name : Soham K mhatre
Date : 18-06-2024
purpose : To Understand the Oops (Object Oriented Programming)
*/

#include<iostream>
using namespace std;

/*
    Object-Oriented Programming (OOP) is a programming paradigm that uses objects and classes to organize and structure code.

    This is the Mostly Used Programming Concept Used in the Industry

    Oops Consist of Classes and Objects:

    Class : 
    class is a Blueprint/User Defined Structure/datatype Which Consist of Properties and Behaviour
    Class consist of Properties and Behaviour.
    Properties --> Properties are the Data Members or Variables
    Behaviour --> Behaviour is the Functions that make Use of the Data members to compute some Functionality.

    ** the Data Members of the class are Private By Default.


    Object : Object is the Instance of the class. 
    we can Create Multiple Objects from the single class.

*/

/*
    Access Modifiers : 
    Access Modifiers are the Keywords that define from where the Data Members of the class can be accessed.
    
    There are 3 types of the Access Modifiers : 
    1) Private : By default the Data Members of the class are Private. Private means The data members can only be accessed in the class Itself.

    2) public : Public Means The Data Members Can be Accessed From Anywhere inside and Outside the class.

    3) Protected: protected means The Data Members can only be accessed By the child classes / Derived Class of the main Class. (This is More Explained in the Inheritance Topic)
*/

//Implementation of the class : 

class car{

    //properties :
    private:
    string ownership;

    public:  //--> to define members public we use Public Class.
    int price;
    string name;

    //Behaviour : 
    void printVal(){
        cout<<name<<" "<<price<<endl;
    }

    //setter and Getter: 
    string getName(){
        return ownership;
    }

    void setName(string name){
        ownership = name;
    }
};

int main(){

    //Creation of the Object : 
    car c1;
    c1.price = 6000000; //here we are using "." DOT Operator to access the Data Members of the class.
    c1.name = "Mustang";

    // cout<<c1.name<<" "<<c1.name<<endl; --> this will give error now as the Data Member of the class are Private By default.

    cout<<c1.name<<" "<<c1.price<<endl;

    // we can make Multiple Objects of the car class :
    car c2;
    car c3;

    c2.name = "Lamborghini";
    c2.price = 30000000;

    c3.name = "Audi-r8";
    c3.price = 6500000;

    cout<<c2.name<<" "<<c2.price<<endl;
    cout<<c3.name<<" "<<c3.price<<endl;

    c3.printVal();
    c2.printVal();

    //Getters and Setters : 
    /*
    Getters and Setters are the Functions used in the Class That are used to access the Private Data Members : ,
    i.e we can Set/get the Value of the Private Data Member using the Getter and Setter.
    */

   c3.setName("Soham"); //--> using the Setter to set the value of the private data Member
   cout<<c3.getName()<<endl; //--> using the Getter to get the Value of the private data Member.



    
   return 0; 
}