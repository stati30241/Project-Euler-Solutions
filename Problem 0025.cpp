#include <iostream>
#include <string>


std::string add(std::string left, std::string right) {
	if (left.size() < right.size()) left = std::string(right.size() - left.size(), '0') + left;
	else right = std::string(left.size() - right.size(), '0') + right;

	std::string output = "";
	int carry = 0;
	for (int i = left.size() - 1; i >= 0; --i) {
		int sum = (left.at(i) - '0') + (right.at(i) - '0') + carry;
		int onesPlace = sum % 10;
		carry = (sum - onesPlace) / 10;
		output = std::to_string(onesPlace) + output;
	}
	if (carry) output = std::to_string(carry) + output;

	return output;
}

int main() {
	std::string a = "0", b = "1";
	size_t i;
	for (i = 1; b.size() < 1000; ++i) {
		std::string temp = a;
		a = b;
		b = add(temp, b);
	}

	std::cout << i << std::endl;

	return 0;
}
