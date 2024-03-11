#include <iostream>
#include <string>


int main() {
	int maxProd = 0;
	for (size_t n = 100; n <= 999; ++n) {
		for (size_t m = 100; m <= 999; ++m) {
			if (n * m <= maxProd) continue;
			std::string prod = std::to_string(n * m);
			if (prod == std::string{ prod.rbegin(), prod.rend() }) maxProd = n * m;
		}
	}

	std::cout << maxProd << std::endl;

	return 0;
}
