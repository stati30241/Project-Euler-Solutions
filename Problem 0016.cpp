#include <iostream>
#include <string>


int main() {
	std::string num = "1", newNum = "";
	for (size_t n = 0; n < 1'000; ++n) {
		int carry = 0;
		for (int i = num.size() - 1; i >= 0; --i) {
			int product = 2 * (num.at(i) - 48) + carry;
			int onesPlace = product % 10;
			carry = (product - onesPlace) / 10;
			newNum = std::to_string(onesPlace) + newNum;
		}
		num = (carry) ? std::to_string(carry) + newNum : newNum;
		newNum = "";
	}

	int digitSum = 0;
	for (char ch : num) {
		digitSum += ch - 48;
	}

	std::cout << digitSum << std::endl;

	return 0;
}
