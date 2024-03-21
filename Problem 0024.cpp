#include <iostream>
#include <string>
#include <unordered_set>


int factorial(int n) {
	int prod = 1;
	for (int i = 1; i <= n; ++i) prod *= i;
	return prod;
}

int main() {
	int index = 1'000'000 - 1;
	std::vector<int> digits{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::string permutation = "";
	for (int d = digits.size() - 1; d >= 0; --d) {
		int i = index / factorial(d);
		index -= i * factorial(d);

		permutation += std::to_string(digits.at(i));
		digits.erase(digits.begin() + i);
	}

	std::cout << permutation << std::endl;

	return 0;
}
