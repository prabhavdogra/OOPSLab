#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class student 
{ 
    string name; 
    int entry_number;  
public:
	student() { }  
    student(string n, int a) { 
        name = n; 
        entry_number = a; 
    }  
    void * operator new(size_t size) { // overloading new operator
        void * p = ::new student(); 
        return p; 
    } 
  
    void operator delete(void * p) {  // overloading delete operator
        free(p); 
    } 
    void display() { 
        cout<< "Name:" << name << '\n' << "Entry Number:" << entry_number << '\n' ; 
    } 
}; 
int main() 
{ 
    student * p = new student("Prabhav", 58); 
    p->display();
    delete p; 
} 
