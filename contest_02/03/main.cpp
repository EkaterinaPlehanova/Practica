#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
bool compare(const std::string& a, const std::string& b) {
    int countA = std::count(a.begin(), a.end(), '1');
    int countB = std::count(b.begin(), b.end(), '1');

    if (countA == countB) {
        return stoi(a) < stoi(b);
    }
    else {
        return countA > countB;
    }
}
int main(){
    int count;
    std::cin >> count;
    
    std::vector<std::string> nums(count);
    for(auto& line : nums) std::cin >> line;
    
    std::sort(nums.begin(), nums.end(), compare);
    
    for(auto& line : nums) std::cout << line << ' ';
}
