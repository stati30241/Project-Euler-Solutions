#include <iostream>


int main() {
	int prime = 0;

	for (size_t primesChecked = 0, n = 2; primesChecked < 10'001; ++n) {
		bool isPrime = true;
		for (size_t i = 2; i * i <= n; ++i) if (n % i == 0) isPrime = false;
		if (isPrime) {
			prime = n;
			primesChecked++;
		}
	}

	std::cout << prime << std::endl;

	return 0;
}
