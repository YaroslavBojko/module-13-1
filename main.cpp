#include <iostream>
#include <vector>

int main() {
    int vectorSize;
    std::cout << "Input vector size: ";
    std::cin >> vectorSize;

    std::vector<int> vec;
    int number;
    for (int i = 0; i < vectorSize; ++i) {
        std::cout << "Input numbers: ";
        std::cin >> number;
        vec.push_back(number);
    }

    int deleteNumber;
    std::cout << "Input number to delete: ";
    std::cin >> deleteNumber;
    for (int i = 0 ; i < vec.size(); ++i) {
        if (vec[i] == deleteNumber) {
            for (int j = i; j < vec.size() - 1; ++j) {
                vec[j] = vec[j + 1];
            }
            vec.pop_back();
            i -= 1;
        }
    }

    std::cout << "Result: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
}
