#include <iostream>


int main() {
	using ull = unsigned long long;

	ull sum = 0;
	for (int n = 2; n < 2'000'000; ++n) {
		bool isPrime = true;
		for (int i = 2; i * i <= n; ++i) if (n % i == 0) isPrime = false;
		if (isPrime) sum += n;
	}

	std::cout << sum << std::endl;

	return 0;
}
