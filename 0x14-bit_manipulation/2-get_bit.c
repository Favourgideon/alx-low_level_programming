#include <main.h>

int get_bit(unsigned long int n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1; // Index out of range
    }

    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}

int main() {
    unsigned long int num = 42; // Change this to your input number
    unsigned int bit_index = 3; // Change this to the desired bit index
    int bit_value = get_bit(num, bit_index);

    if (bit_value != -1) {
        printf("Bit %u of %lu is: %d\n", bit_index, num, bit_value);
    } else {
        printf("Error: Bit index out of range.\n");
    }

    return 0;
}
