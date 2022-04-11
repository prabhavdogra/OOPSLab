#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
#define ll              long long int
#define ull             unsigned long long int
#define forp(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define forpe(i,a,b)    for(int i=(int)a;i<=(int)b;i++)
#define pb              push_back
#define M               1000000007
using namespace std;

//static data members are the attribute of the class instead of the object

class Box {
	public:
		double length, breadth; 		 // declaring variables
		void setLength(double len) {     // declaring methods inside the class
		   length = len;
		}
		void setBreadth(double bre) {
		   breadth = bre;
		}
		static int countOfBoxes ;		// declaring a static variable
		Box() {							// method 
			countOfBoxes ++ ;
		}
};
// NOTE: static methods can only call static data members
// but non-static methods can access both static and non-static data members
// Box is the class and Box1, Box2, Box3 are the objects.

int Box::countOfBoxes ; //declaring memory for static data variable

// main function for the program
int main() {
	Box Box1, Box2, Box3;    // variable box declarations
	cout << "Count of Boxes : " << Box1.countOfBoxes <<endl; 
	Box Box4;
	cout << "Count of Boxes after declaring one more box : " << Box1.countOfBoxes <<endl; 
	return 0 ;
}
