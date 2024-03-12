#include <iostream>
#include <string>

using ull = unsigned long long;

ull gcd(ull a, ull b) {
	if (a > b) return gcd(b, a);
	if (a == 0) return b;
	return gcd(b % a, a);
}

ull lcm(ull a, ull b) {
	return a * b / gcd(a, b);
}

int main() {
	ull num = 1;
	for (ull i = 1; i <= 20; ++i) {
		num = lcm(num, i);
	}

	std::cout << num << std::endl;

	return 0;
}
