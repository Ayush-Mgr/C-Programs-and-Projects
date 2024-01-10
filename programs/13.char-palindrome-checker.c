#include <stdio.h>
#include <string.h>

int main() {
    char input[50], reverse[50];

    printf("Enter The Palindrome Character To Check: ");
    scanf("%s", input);

    int len = (int)strlen(input);

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = input[i];
    }
    reverse[len] = '\0';

    int st = strcmp(input, reverse);
    
    if (st == 0) {
        printf("Given \"%s\" is a Palindrome\n", input);
    } else {
        printf("Given \"%s\" is not a Palindrome\n", input);
    }

    return 0;
}
