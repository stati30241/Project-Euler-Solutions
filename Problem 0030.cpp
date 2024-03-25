#include <iostream>
#include <string>


int main() {
	int sum = 0;
	for (size_t n = 2; n < 1'000'000; ++n) {
		std::string num = std::to_string(n);
		int powerSum = 0;
		for (char digit : num) powerSum += std::pow((digit - '0'), 5);
		if (powerSum == n) sum += n;
	}

	std::cout << sum << std::endl;

	return 0;
}
