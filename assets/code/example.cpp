#include <iostream>
#include <numeric>
#include <vector>

double mean(const std::vector<int>& data) {
    return std::accumulate(data.begin(), data.end(), 0.0) / data.size();
}

int main() {
    const std::vector<int> samples{4, 8, 15, 16, 23, 42};
    std::cout << "mean=" << mean(samples) << '\n';
}
