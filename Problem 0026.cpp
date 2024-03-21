#include <iostream>
#include <vector>


int reciprocalCycle(int n) {
	std::vector<int> quotient;
	for (int d = 1; d != 0;) {
		int factor = d / n;
		d -= factor * n;
		d *= 10;

		auto search = std::find(quotient.begin(), quotient.end(), d);
		if (search != quotient.end()) return quotient.size() - (search - quotient.begin());
		else quotient.push_back(d);
	}

	return 0;
}

int main() {
	int maxCycle = 0;
	int d = 0;
	for (size_t n = 1; n <= 1000; ++n) {
		int cycle = reciprocalCycle(n);
		if (cycle > maxCycle) {
			maxCycle = cycle;
			d = n;
		}
	}
	
	std::cout << d << std::endl;

	return 0;
}
