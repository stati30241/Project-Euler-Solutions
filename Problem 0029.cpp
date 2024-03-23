#include <iostream>
#include <unordered_set>


int main() {
	std::unordered_set<double> powers;
	for (int a = 2; a <= 100; ++a) {
		for (int b = 2; b <= 100; ++b) {
			powers.insert(std::pow(a, b));
		}
	}

	std::cout << powers.size() << std::endl;

	return 0;
}
