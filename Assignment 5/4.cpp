#include <iostream>
using namespace std;

class A {
	public:
		int var = 10 ;
};
class B : public virtual A {
};
class C : public virtual A {
};
class Object : public B, public C {
};
int main() {
	Object o ;
	cout << o.var << '\n' ;
	return 0;
}
