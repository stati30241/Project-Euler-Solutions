#include <iostream>


bool isPrime(int n) {
	if (n < 0) return false;
	for (int d = 2; d * d <= n; ++d) {
		if (n % d == 0) return false;
	}
	return true;
}


int main() {
	int maxPrimes = 0;
	int maxA = 0, maxB = 0;

	for (int a = -999; a < 1000; ++a) {
		for (int b = -1000; b <= 1000; ++b) {
			int numPrimes = 0;
			for (int n = 0; isPrime(n * n + a * n + b); ++n) numPrimes++;
			if (numPrimes > maxPrimes) {
				maxPrimes = numPrimes;
				maxA = a;
				maxB = b;
			}
		}
	}

	std::cout << maxA * maxB << std::endl;

	return 0;
}
