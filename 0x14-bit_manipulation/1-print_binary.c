#include <main.h>

void print_binary(unsigned long int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    int bit_count = sizeof(unsigned long int) * 8;
    int leading_zeros = 1; // Flag to skip leading zeros

    for (int i = bit_count - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i;
        if ((n & mask) != 0) {
            leading_zeros = 0;
            putchar('1');
        } else if (!leading_zeros) {
            putchar('0');
        }
    }
}

int main() {
    unsigned long int num = 42; // Change this to your input number    printf("Binary representation of %lu is: ", num);
    print_binary(num);
    putchar('\n');
    return 0;
}
