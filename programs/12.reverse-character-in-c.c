#include <stdio.h>
#include <string.h>

int main() {
    char input[50], reverse[50];

    printf("Enter The Character To reverse : ");
    scanf("%s", input);

    int len = (int)strlen(input);

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = input[i];
    }
    reverse[len] = '\0';

    printf("%s",reverse);
    return 0;
}
