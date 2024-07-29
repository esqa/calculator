#include <iostream>
#include <chrono>
#include <climits>
#include <iomanip>

int main() {
    const int n = INT_MAX;
    long long sum;

    auto calc_start = std::chrono::high_resolution_clock::now();

    sum = static_cast<long long>(n) * (n - 1) / 2;

    auto calc_end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> calc_duration = calc_end - calc_start;

    std::cout << std::fixed << std::setprecision(9);
    std::cout << "Sum calculation duration: " << calc_duration.count() << " seconds\n";
    std::cout << "Sum: " << sum << "\n";

    return 0;
}