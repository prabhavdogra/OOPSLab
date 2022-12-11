#include <bits/stdc++.h>
using namespace std;

// Abstraction: Data Hiding
// • Can be done using:
//     > Access Specifiers: 
//       • public: 
//         Can be accessed anywhere
//       • protected: 
//         Can be accessed inside the class and derived classes
//       • private: 
//         Can be accesed only inside the class
//     > Header Files
class Student {
    string name;
    int rollNumber;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
};

// Encapsulation: Encapsulating Data and Functions (Getters and Setters)
// • Here variables and functions can be accessed from other classes as well. Hence, this is not data hiding
class Rectangle {
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
};

// Inheritance: Deriving new classs from existing class sharing common attributes and methods
// • Types of Inheritance:
//     > Single Inheritance: 
//       Deriving a new class from a single existing class
//     > Multiple Inheritance: 
//       Deriving a new class from multiple existing classes
//     > Multilevel Inheritance: 
//       Deriving a new class from an existing class which is derived from another class
//     > Hierarchical Inheritance: 
//       Deriving multiple new classes from a single existing class
//     > Hybrid Inheritance: 
//       Deriving new classes from multiple existing classes and vice versa
// • Types of Access Specifiers:
//     > Public Inheritance: 
//       Public members of base class become public members of derived class
//     > Private Inheritance: 
//       Public members of base class become private members of derived class
//     > Protected Inheritance: 
//       Public members of base class become protected members of derived class
// • Access Specifiers in Inheritance:
//                  |      Mode of Inheritance
//       Base Class | public    | protected | private
//       --------------------------------------------
//       private    | N/A       | N/A       | N/A
//       protected  | protected | protected | private
//       public     | public    | protected | private
class Person {
    int age;
    string name;
public:
    Person(int a, string n) {
        age = a;
        name = n;
    }
};

class Student : public Person {
    int rollNumber;
    string courseName;
public:
    Student(int a, string n, int r, string c) : Person(a, n) {
        rollNumber = r;
        courseName = c;
    }
};

// Polymorphism: Poly = Many, Morph = Forms
// • Types of Polymorphism:
//     > Compile Time Polymorphism: Function Overloading and Operator Overloading
//         • Function Overloading: Same function name with different parameters
//             void print() { cout << "O/P: " << endl; }
//             void print(int val) { cout << "O/P: " << val << endl; }
//         • Operator Overloading: Overloading operators like +, -, *, /, etc.
//             Complex operator + (Complex const &obj) { // Write Code }
//     > Run Time Polymorphism: Function Overriding
//         • Function Overriding: Same function name with same parameters in base and derived class
//             Base Class:
//               virtual void print() { cout << "Base" << endl; }
//             Derived Class:
//               void print() { cout << "Derived" << endl; }
class Instrument {
public:
    virtual void play() = 0;
};
class Piano : public Instrument {
public:
    void play() { cout << "Piano playing" << endl; }
};

// • Virtual Functions: 
//   Functions that can be overridden in derived classes
// • Purely Virtual Functions: 
//   Virtual functions with no definition
//     virtual void play() = 0;
// • Abstract Function: 
//   A purely virtual function
// • Abstract Class: 
//   Class with at least one purely virtual function
// • Interface Class: 
//   A class with all purely virtual functions
// • Types of constructors:
//     > Default Constructor: 
//       Constructor has no parameters
//     > Parameterized Constructor: 
//       Constructor has parameters
//     > Copy Constructor: 
//       Copying one object to another

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    return 0;
}
