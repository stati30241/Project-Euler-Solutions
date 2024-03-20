#include <iostream>


int sigma(int n) {
	int value = 1;
	for (int d = 2; d <= n; ++d) {
		if (n % d != 0) continue;

		int k = 0;
		while (n % d == 0) {
			n /= d;
			k++;
		}

		value *= (std::pow(d, k + 1) - 1) / (d - 1);
	}

	return value;
}

int main() {
	int sum = 0;
	for (int n = 3; n <= 10000; ++n) {
		int m = sigma(n) - n;
		if (n == sigma(m) - m && n != m && m <= 10000) sum += n;
	}

	std::cout << sum << std::endl;

	return 0;
}
