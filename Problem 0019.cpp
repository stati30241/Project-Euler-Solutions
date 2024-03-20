#include <iostream>
#include <vector>


int main() {
	std::vector<int> months = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int numSundays = 0;

	int day = 2; // Jan 1, 1901 was a tuesday
	for (size_t i = 1901; i <= 2000; ++i) {
		for (size_t j = 0; j < months.size(); ++j) {
			if (j == 2 && j % 4 == 0) day += 29;
			else day += months.at(j);

			if (day % 7 == 0) numSundays++;
		}
	}

	std::cout << numSundays << std::endl;


	return 0;
}
