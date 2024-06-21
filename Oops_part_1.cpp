/*
name : Soham K mhatre
Date : 18-06-2024
purpose : To Understand the Oops (Object Oriented Programming)
*/

#include<iostream>
#include<string.h>
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

class normalperson{

    // Before Following Greedy Alignment : 24 bytes
    //Properties : 
    public:
    int salary; //--> 4 bytes
    double age; // --> 8 bytes
    char Position; //--> 1 bytes

};

class greedyperson{
    // After following Greedy Alignment :  
    // properties :
    public:
    double age; //--> 8 bytes
    int salary; //--> 4 bytes
    char position; //--> 1 bytes
};


class person{

    public:
    char *name;
    int salary;

    person(){
        cout<<"Constructor Called ."<<endl;
        
    }

    person(int salary){
        //This Keyword explained down.
        this -> salary = salary;
        name = new char[100];
    }

    person(person& p1){
      cout<<"Custom Copy constructor called"<<endl;

      char *n1 = new char[strlen(p1.name)+1];
      strcpy(n1, p1.name);
      this->name = n1;

      this -> salary = p1.salary;

    }

    void showDetails(){
        cout<<this->name<<" "<<this->salary<<endl;
    }

    void setName(char name[]){
         strcpy(this->name, name);
    }

    ~person(){ 
        //this is a Destructor : Explained Down
        cout<<"Destructor is Called For"<<this->name<<endl;
    }
};

class animal{
    public:
    static int age; //--> this data member can Be accessed from anywhere.

    static int getAge(){
        return age;
    }

};

int animal::age = 10;

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

    // Behind the Scenes of Storing the Object in Memory : 
    /*
        according to the Operating System X64 bits, every operation requires 8 bytes
        so in the First Normal Person p1;
        1) int salary --> 4byte + 4byte padding = 8 byte
        2) double age --> 8 byte = 8 byte
        3) char position --> 1 byte + padding 7 byte = 8 byte
        Total space taken = 24 byte

        *The padding is the Space Allocated by the compiler to Fill the space upto 8bytes 

        * The greedy Alignment Is a Technique that is used in Object Oriented Programming , here we     
        order the Variables/ properties in a Decreasing order, The Variable Taking up large space Will come first and   
        variable take least space will come last.
        * so in the second greedyperson:
        1) double age --> 8 bytes = 8 bytes
        2) int salary --> 4bytes + char position --> 1 byte + padding 3 bytes = 8 bytes
        Total Space taken = 16 bytes
        (The Space Reduced to the 16 bytes from the 24 bytes).

    */
   normalperson p1;
   cout<<"Size Not Using Greedy Alignment : "<<sizeof(p1)<<endl; //--> 24 bytes

   greedyperson g1;
   cout<<"Size After Following Greedy Alignment : "<<sizeof(g1)<<endl; //--> 16 bytes

   // Static Allocation and Dynamic Allocation
   
   //Static Allocation :
   /*
   Static Memory is the memory allocated in the advanced Before the program Runs.
   */
   normalperson p2; 

   //dynamic Allocation : 
   /*
     dynamic Memory is the memory allocated During the runtime.. the memory allocated is in the heap memory 
   */
   normalperson *n1 = new normalperson;

   //Constructor : 
   /*
    * Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs the values i.e. provides data for the object which is why it is known as a constructor.

    * Constructors do not return value, hence they do not have a return type.
    * Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as a constructor.
    * Constructor is a member function of a class, whose name is the same as the class name.
    
    There Are Two Types of Constructor : 
    1) default Constructor : The constructor that is Built automatically at the time of the Object creation.

    2) Parameterized constructor : The Constructor that is Built by the user to Pass the values at the time of the object Creation for initialization of the Object data members.

    * when the Constructor is Written Explicitly the Default Constructor dies.
   */

    person *pr1 = new person();

    /*
    This Keyword : This Keyword is Used to Store the Address of the Current Object and using "This" Keyword we can Store the Values in the Current Data Members.
    */

   person pr2(50000);
   char ch[4] = "skm";
   pr2.setName(ch);
   pr2.showDetails();

   /*
    Copy Constructor : This is a Type of a constructor which is automatically created (default Copy Constructor) and is used to copy the data members/ properties of orginal Object into Copy Object.

    The Copy Created by Default Copy Constructor is a Shallow Copy.

    Shallow Copy : The shallow copy is a copy which stores the References/Addresses of the Data Members into the Copy Object, so whenever there is a Change in the Original Object it will be reflected in the shallow copy

    Deep Copy : deep copy truly clones the Object but it requires to implement Custom copy Constructor.

    * the default copy constructor dies after the Custom / user defined Copy Constructor is Implemented.

    */


   // Implementing the Default Copy Constructor : 

   person pr3(pr2);  //--> new shallow Object
   pr3.showDetails();

   pr2.name[0] = 'k'; //--> changing details in original object
   pr2.showDetails();

   pr3.showDetails(); //--> here also the changes are reflected which is a Wrong thing.

   // Implementing A Deep Copy Constructor : 

    person pr4(pr2); //--> new Deep Object

    pr2.name[0] = 'l'; //--> changing details in original object
    pr2.showDetails();

    pr4.showDetails(); //--> here even after changing the original Object the changes are not reflected


    //Copy Assignment Operator: it is just to copy the data members from a object to other object

    person pr5;
    pr5 = pr4;

    cout<<"pr4 Details : "<<endl;
    pr4.showDetails();

    cout<<"pr5 Details : "<<endl;
    pr5.showDetails();




    /*  
    *Destructor : The Destructor is used to Deallocate the memory used by the object, before the program ends. 

    *the default Destructor is defined once the object is Created.

    *The Default Destructor is Called Automatically for Statically Created Objects.

    *For the Dynamically created Objects we have to Free the Memory Manually using the "delete" Keyword.

    * we can also create the Custom Destructor:
        the name is same as the constructor , but preceded with a ~ (tilde) sign, no return type, no parameters.
    
    */

   //statically created object : 
   person pr6; //--> destructor will be called automatically for it.
   char temp1[4] = "pr6";
   pr6.name = temp1;

   person *pr7 = new person();
   char temp2[4] = "pr7"; 
   pr7->name = temp2;
   delete pr7; //--> manually calling Destructor.

    /*
        const and Static Keywords : 
        
        *const keywords are used to define a Varible Whose value can't be Changed Once defined in whole program.

        *static Keywords are used to define data members who belong to a class but their value can be accessed from anywhere

        * A special operator is used to Access the Static member and Functions , its Scope Resolution Operator (::).

    */

   cout<<"Static Member Function : "<<animal::getAge()<<endl;

   return 0; 
}