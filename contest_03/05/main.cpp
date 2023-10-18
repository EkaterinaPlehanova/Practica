#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); 

    std::map<std::string, int> wordCount;

    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;
        wordCount[word]++;
    }

    int maxCount = 0;
    for (const auto& pair : wordCount) {
        maxCount = std::max(maxCount, pair.second);
    }

    bool found = false;
    for (const auto& pair : wordCount) {
        if (pair.second == maxCount) {
            if (found) {
                std::cout << ' ';
            }
            std::cout << pair.first;
            found = true;
        }
    }

    if (!found) {
        std::cout << "-1";
    }

    return 0;
}
