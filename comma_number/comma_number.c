
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 12.3658
// 12.36
// 0.0058

int main() {
    float floatNumber = 0.0;
    printf("Enter a float number:");
    scanf("%f", &floatNumber);

    char str[10];
    sprintf(str, "%.4f", floatNumber);

    int i = 0;
    int len = strlen(str) + 1;

    while (str[i] != '.') {
        i++;
    }

    i += 3;

    char missedNumber[10] = "0.00";

    while (str[i] != '\0') {
        missedNumber[i - 1] = str[i];
        i++;
    }
    missedNumber[i - 1] = '\0';

    printf("%.2f", floatNumber);
    printf("%s\n", missedNumber);

    return 0;
}