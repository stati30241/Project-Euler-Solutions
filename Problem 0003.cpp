#include <iostream>
#include <vector>


int main() {
	using ull = unsigned long long;

	std::vector<ull> factors;
	ull num = 600'851'475'143;

	for (ull n = 2; n <= num; ++n) {
		if (num % n != 0) continue;
		factors.push_back(n);
		while (num % n == 0) num = num / n;
	}

	std::cout << factors.back() << std::endl;

	return 0;
}
