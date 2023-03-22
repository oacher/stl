#include <iostream>
#include <set>

int main() {
    
    int n;
    std::cin >> n;

    std::set<int> uniqueNumbers;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        uniqueNumbers.insert(num);
    }

    std::cout <<  uniqueNumbers.size() << std::endl;

    return 0;
}