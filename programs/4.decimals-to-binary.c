#include <stdio.h>

int main() {
    int a, temp = 0, d, i = 1;

    // Prompt user to input a decimal number
    printf("Enter the decimal number: ");
    scanf("%d", &a);

    // Loop to convert decimal to binary
    while (a != 0) {
        // Calculate the remainder when dividing 'a' by 2 (binary digit)
        d = a % 2;

        // Update the binary representation (temp) by adding the binary digit multiplied by its position (i)
        temp = temp + (d * i);

        // Update 'a' to the quotient obtained by dividing 'a' by 2
        a = a / 2;

        // Move to the next position in the binary representation
        i *= 10;
    }

    // Print the binary representation of the decimal number
    printf("Binary number is %d\n", temp);

    // Return 0 to indicate successful execution
    return 0;
}
