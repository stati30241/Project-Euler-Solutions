#include <iostream>
#include <map>


using ull = unsigned long long;

ull latticePaths(int n, int m, std::map<std::pair<int, int>, ull>& cache) {
	if (n == 0 && m == 0) return 1;
	if (cache.contains(std::make_pair(n, m))) return cache.at(std::make_pair(n, m));

	ull total = 0;
	if (n != 0) total += latticePaths(n - 1, m, cache);
	if (m != 0) total += latticePaths(n, m - 1, cache);

	cache.insert(std::make_pair(std::make_pair(n, m), total));

	return total;
}


int main() {
	std::map<std::pair<int, int>, ull> cache{ };
	std::cout << latticePaths(20, 20, cache) << std::endl;

	return 0;
}
