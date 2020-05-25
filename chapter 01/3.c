#include <stdio.h>
#include <string.h>

void URLify(char str[], int len) {
    int curChar = (int) strlen(str) - 1;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[curChar] = '0';
            str[curChar - 1] = '2';
            str[curChar - 2] = '%';
            curChar -= 2;
        } else {
            str[curChar] = str[i];
        }
        curChar--;
    }
}

int main() {//todo
    char str[18] = "Mr John Smith    ";
    URLify(str, 13);
    printf("%s", str);
}