#include <iostream>
#include <vector>


int coinSum(int n, int highestCoin) {
	if (n == 0) return 1;
	static const std::vector<int> coins{ 1, 2, 5, 10, 20, 50, 100, 200 };

	int sum = 0;
	for (int coin : coins) {
		if (coin > n || coin > highestCoin) break;
		sum += coinSum(n - coin, coin);
	}

	return sum;
}

int main() {
	std::cout << coinSum(200, 200) << std::endl;

	return 0;
}
