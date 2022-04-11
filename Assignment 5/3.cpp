#include <iostream>
using namespace std;

class Human {
	public:
		Me() {
			cout << "I'm a human" << '\n' ;
		}
};
class AwesomeGuy {
	public:
		AwesomeGuy() {
			cout << "I'm an awesome guy" << '\n' ;
		}
};

class Prabhav: public Me, public AwesomeGuy {
};

int main() {
	Prabhav prabhav;
	return 0;
}
