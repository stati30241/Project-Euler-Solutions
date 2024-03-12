#include <iostream>


int main() {
	using ull = unsigned long long;

	ull n = 100;
	ull sumOfSquares = n * (n + 1) * (2 * n + 1) / 6;
	ull squareofSums = (n * (n + 1) / 2) * (n * (n + 1) / 2);
	std::cout << squareofSums - sumOfSquares << std::endl;

	return 0;
}
