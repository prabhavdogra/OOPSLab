#include <bits/stdc++.h>
#include<math.h>
#define ll              long long int
#define ull             unsigned long long int
#define forp(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define forpe(i,a,b)    for(int i=(int)a;i<=(int)b;i++)
#define pb              push_back
#define M               1000000007
using namespace std;

class student {
	public:
		int rollNo ;			 		 // declaring variables
		string address, name ;
		void getData() {                 // methods inside the class
		   cout << "Enter the name of the student: " ;
		   getline (cin, name);
		   cout << "Enter the roll no. of the student: " ;
		   cin >> rollNo ;
		   cin.ignore() ;
		   cout << "Enter the address of the student: " ;
		   getline (cin, address );

		}
		void displayData() {
		   cout << "Name: " << name << '\n' ;
		   cout << "Roll No.: " << rollNo << '\n' ;
		   cout << "Address: " << address << '\n' ;
		}
};

// main function for the program
int main() {
	student student1;        // variable box declaration
	student1.getData();      // calling methods
	student1.displayData();
}
