#include <string>
#include <unordered_map>
#include <assert.h>

// definitions

typedef std::unordered_map<char, int> hash;

void createMapIgnoreWhiteSpaces(const std::string &str, hash &map);

bool isNumOfOddCharsBelowOne(hash &map);


//functions todo converto to lower case

bool isPalindromePermutation(const std::string &str) {
    hash map;
    createMapIgnoreWhiteSpaces(str, map);
    return isNumOfOddCharsBelowOne(map);

}

void createMapIgnoreWhiteSpaces(const std::string &str, hash &map) {
    for (auto c : str) {
        if (map.find(c) == map.end() && c != ' ') {
            map[c] = 1;
        } else {
            map[c]++;
        }
    }
}

bool isNumOfOddCharsBelowOne(hash &map) {
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
    assert(isPalindromePermutation("aab"));
    assert(isPalindromePermutation("aabb"));
    assert(!isPalindromePermutation("ab"));
    assert(isPalindromePermutation("a"));
    assert(isPalindromePermutation("aA"));
    assert(isPalindromePermutation("AA"));
    assert(isPalindromePermutation("aBa"));
    assert(!isPalindromePermutation("aaabbbc"));
    assert(isPalindromePermutation("aaaabbbcc"));
    assert(isPalindromePermutation(""));
    assert(isPalindromePermutation("Tact Coa"));
}