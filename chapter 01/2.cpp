#include <iostream>
#include <unordered_map>

void createMap(std::unordered_map<char, int> &map, const std::string &str);

bool isPermutation(const std::string &a, const std::string &b) {
    if (a.size() != b.size()) {
        return false;
    }
    std::unordered_map<char, int> aMap, bMap;
    createMap(aMap, a);
    createMap(bMap, b);
    return aMap == bMap;

}

void createMap(std::unordered_map<char, int> &map, const std::string &str) {
    for (auto c: str) {
        if (map.find(c) == map.end()) {
            map[c] = 1;
        } else {
            map[c]++;
        }
    }
}
