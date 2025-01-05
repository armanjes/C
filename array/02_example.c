// find out smallest number

#include <stdio.h>

int main() {
    int number[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int smallestNumber = number[0],
        length = sizeof(number) / sizeof(number[0]),
        i;

    for (i = 0; i < length; i++) {
        if (smallestNumber > number[i]) {
            smallestNumber = number[i];
        }
    }

    printf("Smallest number: %d", smallestNumber);

    return 0;
}