#include <iostream>
#include <unordered_set>


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
	std::vector<int> abundantNumbers;
	for (int n = 3; n < 28123; ++n) {
		if (sigma(n) > 2 * n) abundantNumbers.push_back(n);
	}

	std::unordered_set<int> sums;
	for (size_t i = 0; i < abundantNumbers.size(); ++i) {
		for (size_t j = i; j < abundantNumbers.size(); ++j) {
			int sum = abundantNumbers.at(i) + abundantNumbers.at(j);
			if (sum <= 28123) sums.insert(sum);
		}
	}

	int sum = 0;
	for (size_t n = 0; n <= 28123; ++n) {
		if (!sums.contains(n)) sum += n;
	}

	std::cout << sum << std::endl;

	return 0;
}
