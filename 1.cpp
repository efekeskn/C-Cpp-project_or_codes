#include <iostream>
#include <vector>

template <typename T>
void reverseVector(std::vector<T>& v) {
    size_t n = v.size();
    for (size_t i = 0; i < n / 2; ++i) {
        size_t j = n - i - 1;
        std::swap(v[i], v[j]);
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Original vector: ";
    for (int x : vec) std::cout << x << " ";
    std::cout << std::endl;
    
    reverseVector(vec);
    
    std::cout << "Reversed vector: ";
    for (int x : vec) std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}
