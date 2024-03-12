#include <iostream>


int main() {
	int abc = 1;
	for (int a = 1; a < 1000; ++a) {
		for (int b = 1; b < 1000; ++b) {
			if (1000 - a - b < 0) continue;
			if (a * a + b * b == (1000 - a - b) * (1000 - a - b)) 
				abc = a * b * (1000 - a - b);
		}
	}

	std::cout << abc << std::endl;

	return 0;
}
