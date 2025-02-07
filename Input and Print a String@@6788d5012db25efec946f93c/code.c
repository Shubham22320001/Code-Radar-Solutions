#include <stdio.h>

int main() {
    char str[100];

    // Taking input from the us
    fgets(str, sizeof(str), stdin);  // Using fgets to allow spaces in the input

    // Printing the entered string
    printf("You entered: %s\n", str);

    return 0;
}