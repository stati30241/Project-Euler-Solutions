#include <algorithm>
#include <iostream>
#include <string>


int main() {
	int sum = 0;
	for (int n = 1000; n < 100000; ++n) {
		for (int d = 1; d * d <= n; ++d) {
			if (n % d != 0) continue;
			int q = n / d;
			std::string pandigits = std::to_string(n) + std::to_string(d) + std::to_string(q);
			std::sort(pandigits.begin(), pandigits.end());
			if (pandigits == "123456789") {
				sum += n;
				break;
			}
		}
	}

	std::cout << sum << std::endl;

	return 0;
}
