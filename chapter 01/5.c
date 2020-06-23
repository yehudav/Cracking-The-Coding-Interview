#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int getDistance(const char a[], const char b[]);

bool areOneEditAway(const char a[], const char b[]);

bool areOneCharAway(char a[], char b[]);


bool areOneAway(char a[], char b[]) {
    int distance = getDistance(a, b);
    if (distance == 0) {
        return areOneEditAway(a, b);
    } else if (distance == 1) {
        return areOneCharAway(a, b);
    }
    return false;
}

int getDistance(const char a[], const char b[]) {
    int lenA = (int) strlen(a);
    int lenB = (int) strlen(b);
    return abs(lenA - lenB);
}

bool areOneEditAway(const char a[], const char b[]) {
    int differentChars = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] != b[i]) {
            differentChars++;
            if (differentChars > 1) {
                return false;
            }
        }
    }
    return true;
}

bool areOneCharAway(char a[], char b[]) {
    char *str = a;
    char *subStr = b;
    if (strlen(str) < strlen(subStr)) {
        str = b;
        subStr = a;
    }
    int differentChars = 0;
    for (int i = 0; i < strlen(subStr); i++) {
        if (str[i + differentChars] != subStr[i]) {
            differentChars++;
            if (differentChars > 1) {
                return false;
            }
        }
    }
    return true;
}
