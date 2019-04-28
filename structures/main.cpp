#include <iostream>

using namespace std;

// In C++ the only difference between a class and a struct is that members and base classes are private by default in classes, whereas they are public by default in structs.
//
// So structs can have constructors, and the syntax is the same as for classes.

int main() {
	struct Vehicle {
		
		int horsePower;
		
		// Constructor function
		Vehicle(int hp) {
			horsePower = hp;
		}

		// Getter HorsePower
		int getHorsePower() {
			return horsePower;
		}
		void setHorsePower(int hp) {
			horsePower = hp;
		}

	};

	Vehicle ceed(105);

	cout <<  ceed.getHorsePower() << endl;

	return 0;	
}
