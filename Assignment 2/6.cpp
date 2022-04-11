#include <bits/stdc++.h>
#include<math.h>
#define ll              long long int
#define ull             unsigned long long int
#define forp(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define forpe(i,a,b)    for(int i=(int)a;i<=(int)b;i++)
#define pb              push_back
#define M               1000000007
using namespace std;

class Box {
	public:
		double length, breadth; 		 //variables
		double getArea() ;             //methods inside the class
		void setLength(double len) ;
		void setBreadth(double bre) ;
};
double Box::getArea() {             //methods outside the class
   return length * breadth ;
}
void Box::setLength(double len) {
   length = len;
}
void Box::setBreadth(double bre) {
   breadth = bre;
}	

// main function for the program
int main() {
	Box Box1;                // variable box declaration
	double area = 0.0;       // area variable
	double l, b ;
	cout << "Enter Length: " ;
	cin >> l ;
	cout << "Enter Breadth: " ;
	cin >> b ;
	Box1.setLength(l);     // calling methods
	Box1.setBreadth(b); 
	
	area = Box1.getArea();
	cout << "Area of Box : " << area <<endl; // printing area
	return 0 ;
}
