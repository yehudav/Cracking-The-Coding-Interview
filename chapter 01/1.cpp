#include <string>
#include <bits/stdc++.h>

bool isUnique(const std::string &str) {
    std::unordered_set<char> stringSet;
    for (auto c : str) {
        stringSet.insert(c);
    }
    return stringSet.size() == str.size();
}

bool isUniqueNoAdditionalDataStructures(std::string str) {
    std::sort(str.begin(), str.end());
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
    return true;
}
