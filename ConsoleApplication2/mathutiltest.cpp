#include "mathutil.h"
#include <iostream>

using namespace std;

int is_pow_of_two_test();

int main() {
	cout << is_pow_of_two_test() << endl;
}

int is_pow_of_two_test() {
	if (!(is_pow_of_two(1) == true)) {
		return 1;
	}
	if (!(is_pow_of_two(2) == true)) {
		return 2;
	}
	if (!(is_pow_of_two(3) == false)) {
		return 3;
	}
	if (!(is_pow_of_two(4) == true)) {
		return 4;
	}
	if (!(is_pow_of_two(5) == false)) {
		return 5;
	}
	if (!(is_pow_of_two(6) == false)) {
		return 6;
	}
	if (!(is_pow_of_two(0) == false)) {
		return 7;
	}

	return 0;
}

