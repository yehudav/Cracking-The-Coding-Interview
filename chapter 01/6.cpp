#include <string>
#include <sstream>

std::string compress(const std::string &str);

void compressCurChar(int &i, const std::string &str, std::stringstream &compressed);

std::string getShorterStringOrFirstString(const std::string &a, const std::string &b);


std::string compressString(const std::string &str) {
    std::string compressed = compress(str);
    return getShorterStringOrFirstString(str, compressed);
}

std::string compress(const std::string &str) {
    std::stringstream compressed;
    for (int i = 0; i < str.length();) {
        compressCurChar(i, str, compressed);
    }
    return compressed.str();
}

void compressCurChar(int &i, const std::string &str, std::stringstream &compressed) {
    char cur = str[i];
    int count = 0;
    while (cur == str[i]) {
        count++;
        i++;
    }
    compressed << cur << count;
}

/**
 * returns the shortest string, or the first string (a) if they are the same length
 */
std::string getShorterStringOrFirstString(const std::string &a, const std::string &b) {
    if (a.length() <= b.length()) {
        return a;
    }
    return b;
}
