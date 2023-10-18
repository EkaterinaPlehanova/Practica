#include <iostream>
#include <string>

std::string RLE(const std::string& input) {
    std::string compressed;

    int count = 1;
    for (int i = 1; i <= input.length(); i++) {
        if (i == input.length() || input[i] != input[i - 1]) {
            compressed += input[i - 1];
            if (count > 1) {
                compressed += std::to_string(count);
            }
            count = 1;
        }
        else {
            count++;
        }
    }

    return compressed;
}

int main() {
    std::string input;
    std::cin >> input;

    std::string compressed = RLE(input);
    std::cout << compressed << std::endl;

    return 0;
}
