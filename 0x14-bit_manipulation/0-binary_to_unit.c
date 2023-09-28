#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int shift = 0;

    while (*b) {
        if (*b == '0' || *b == '1') {
            result = (result << 1) | (*b - '0');
            b++;
        } else {
            return 0; // Invalid character in the string
        }
    }

    return result;
}

int main() {
    const char *binary_string = "1101"; // Change this to your binary input
    unsigned int result = binary_to_uint(binary_string);

    if (result != 0) {
        printf("Converted: %u\n", result);
    } else {
        printf("Invalid binary input\n");
    }

    return 0;
}
