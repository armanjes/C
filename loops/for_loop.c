/*
📚 for loop in C

Loops allow you to execute a block of code repeatedly as long as a condition is true.

✅ 1. for Loop
The for loop is used when the number of iterations is known beforehand.

for (initialization; condition; update) {
    // Code to execute while condition is true
}

*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Number: %d\n", i);
    }
        return 0;
}