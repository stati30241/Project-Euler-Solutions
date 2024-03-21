#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


int main() {
	std::ifstream ifs{ "names.txt" };
	if (!ifs.is_open()) return 0;

	std::vector<std::string> names;
	std::string token = "";
	for (char ch = 0; ifs.get(ch);) {
		if (ch == ',' || ch == '"') {
			if (token.empty()) continue;
			names.push_back(token);
			token = "";
		} else token += ch;
	}
	std::sort(names.begin(), names.end());
	
	unsigned long long sum = 0;
	for (size_t i = 0; i < names.size(); ++i) {
		int worth = 0;
		for (char ch : names.at(i)) worth += ch - 'A' + 1;
		sum += (i + 1) * worth;
	}

	std::cout << sum << std::endl;

	return 0;
}
