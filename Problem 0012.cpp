#include <iostream>


int numDivisors(int n) {
	int totalDivisors = 0;
	for (int d = 1; d <= n; ++d) {
		if (n % d == 0) totalDivisors++;
	}
	return totalDivisors;
}

int main() {
	int answer = 0;
	for (int n = 0;; ++n) {
		int totalDivisors = 1;		
		if (n % 2 == 0) totalDivisors = numDivisors(n / 2) * numDivisors(n + 1);
		else totalDivisors = numDivisors(n) * numDivisors((n + 1) / 2);

		if (totalDivisors > 500) {
			answer = n * (n + 1) / 2;
			break;
		}
	}

	std::cout << answer << std::endl;

	return 0;
}
