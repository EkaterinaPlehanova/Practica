#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        }
        else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::cin >> m;
    std::vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    std::vector<int> merged = mergeSortedArrays(arr1, arr2);

    for (int i = 0; i < merged.size(); i++) {
        std::cout << merged[i] << " ";
    }

    return 0;
}
