#include <iostream>


int main() {
	int sum = 0;

	int a = 0, b = 1;
	while (b < 4'000'000) {
		int fibn = a + b;
		a = b;
		b = fibn;

		if (fibn % 2 == 0) sum += fibn;
	}

	std::cout << sum << std::endl;

	return 0;
}
