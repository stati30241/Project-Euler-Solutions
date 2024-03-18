#include <iostream>
#include <string>
#include <map>


std::string getNumberString(int n) {
	static const std::map<int, std::string, std::greater<int>> numberMap = {
		{ 90, "ninety" },
		{ 80, "eighty" },
		{ 70, "seventy" },
		{ 60, "sixty" },
		{ 50, "fifty" },
		{ 40, "forty" },
		{ 30, "thirty" },
		{ 20, "twenty" },
		{ 19, "nineteen" },
		{ 18, "eighteen" },
		{ 17, "seventeen" },
		{ 16, "sixteen" },
		{ 15, "fifteen" },
		{ 14, "fourteen" },
		{ 13, "thirteen" },
		{ 12, "twelve" },
		{ 11, "eleven" },
		{ 10, "ten" },
		{ 9, "nine" },
		{ 8, "eigth" },
		{ 7, "seven" },
		{ 6, "six" },
		{ 5, "five" },
		{ 4, "four" },
		{ 3, "three" },
		{ 2, "two" },
		{ 1, "one" }
	};

	std::string number = "";
	if (n == 1000) return "onethousand";

	int numHundreds = 0;
	while (n - 100 >= 0) {
		numHundreds++;
		n -= 100;
	}
	if (numHundreds) {
		if (n) number += numberMap.at(numHundreds) + "hundred" + "and";
		else number += numberMap.at(numHundreds) + "hundred";
	}

	for (const auto& [num, numString] : numberMap) {
		if (n - num >= 0) {
			number += numString;
			n -= num;
		}
	}

	return number;
}

int main() {
	int sum = 0;
	for (size_t n = 1; n <= 1000; ++n) {
		std::string number = getNumberString(n);
		sum += number.size();
	}

	std::cout << sum << std::endl;

	return 0;
}
