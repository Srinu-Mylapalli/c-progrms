#include <stdio.h>

enum Fruit { APPLE, BANANA, ORANGE, MANGO };

int main() {
    int fruitPrices[] = {100, 40, 60, 90};  // Prices in rupees for kg

    printf("Price of one kg Orange: %d rupees\n", fruitPrices[ORANGE]);  // Output: 60 rupees

    return 0;
}
