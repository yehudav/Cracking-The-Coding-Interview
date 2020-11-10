#include <string.h>

void reverse(char *str) {
    int len = (int) strlen(str)-1;
    char tmp;
    for (int i = 0; i < len / 2; i++) {
        tmp = str[len - i];
        str[len - i] = str[i];
        str[i] = tmp;
    }

}
