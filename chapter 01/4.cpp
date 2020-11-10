#include <string>
#include <unordered_map>
#include <cassert>

// definitions

typedef std::unordered_map<char, int> hash;

void createLowerCaseMapIgnoreWhiteSpaces(const std::string &str, hash &map);

char lower(char c);

bool isNumOfOddCharsBelowTwo(hash &map);


bool isPalindromePermutation(const std::string &str) {
    hash map;
    createLowerCaseMapIgnoreWhiteSpaces(str, map);
    return isNumOfOddCharsBelowTwo(map);

}

void createLowerCaseMapIgnoreWhiteSpaces(const std::string &str, hash &map) {
    for (auto c : str) {
        char lowerC = lower(c);
        if (map.find(lowerC) == map.end() && !isspace(lowerC)) {
            map[lowerC] = 1;
        } else {
            map[lowerC]++;
        }
    }
}

char lower(char c) {
    if (c >= 65 && c <= 90) {
        c += 32;
    }
    return c;
}

bool isNumOfOddCharsBelowTwo(hash &map) {
    bool oddCharNum = false;
    for (auto &it : map) {
        if (it.second % 2 == 1) {
            if (oddCharNum) {
                return false;
            }
            oddCharNum = true;
        }
    }
    return true;
}

int main() {
    assert(isPalindromePermutation("Tact coa")); //todo check why fails with  space
}