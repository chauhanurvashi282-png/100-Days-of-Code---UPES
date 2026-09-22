
#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;

    fgets(str, 100, stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            
        } else {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}