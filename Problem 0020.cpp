#include <iostream>
#include <string>


std::string multiply(const std::string& bigNum, int n) {
	std::string product = "";
	int carry = 0;
	for (int i = bigNum.size() - 1; i >= 0; --i) {
		int prod = (bigNum.at(i) - 48) * n + carry;
		int onesPlace = prod % 10;
		carry = (prod - onesPlace) / 10;
		product = std::to_string(onesPlace) + product;
	}
	if (carry) product = std::to_string(carry) + product;
	
	return product;
}

int main() {
	std::string factorial = "1";
	for (int i = 1; i <= 100; ++i) {
		factorial = multiply(factorial, i);
	}

	int digitSum = 0;
	for (char ch : factorial) digitSum += ch - 48;

	std::cout << digitSum << std::endl;

	return 0;
}
