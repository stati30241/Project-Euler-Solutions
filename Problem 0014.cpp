#include <iostream>


using ull = unsigned long long;

ull collatzSize(ull n) {
	ull size;
	for (size = 0; n != 1; ++size) {
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
	}
	return size;
}

int main() {
	ull maxSize = 0, number  = 0;
	for (ull n = 1; n < 1'000'000; ++n) {
		ull size = collatzSize(n);
		if (size > maxSize) {
			maxSize = size;
			number = n;
		}
	}

	std::cout << number << std::endl;
}
