#include <string>
#include <sstream>
#include <cassert>

std::string compressString(const std::string &str) {
    std::stringstream compressed;
    for (int i = 0; i < str.length();) {
        char cur = str[i];
        int count = 0;
        while (cur == str[i]) {
            count++;
            i++;
        }
        compressed << cur << count;
    }
    if (str.length() <= compressed.str().length()) {
        return str;
    }
    return compressed.str();
}
