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

class student {
	public:
		const string name ;			// cons data member
		// initialising const data members outside the class (initialiser list)
		student(string name_entered): name(name_entered) {} ; 
};

// main function for the program
int main() {
	// declaring objects
	student s1("Honey Singh"), s2("Mika Singh"), s3("Eminem Dattalol");
	cout << s1.name << '\n' ;	// can't be changed
	cout << s2.name << '\n' ;	// can't be changed
	cout << s3.name << '\n' ;	// can't be changed
	return 0 ;
}
