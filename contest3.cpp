#include <iostream>

int main() {
    int k, n, w;
    std::cin >> k >> n >> w;

    // Calculate the total cost of bananas
    int totalCost = w * (w + 1) / 2 * k;

    // Calculate the amount to borrow, if needed
    int borrowAmount = (totalCost > n) ? (totalCost - n) : 0;

    std::cout << borrowAmount << std::endl;

    return 0;
}
