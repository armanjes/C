/*

✅ 1. if Statement
Used to execute a block of code if a condition is true.
if (condition) {
    // Code to execute if condition is true
}

✅ 2. if-else Statement
Adds an else block to execute code when the condition is false.
if (condition) {
    // Executes if condition is true
} else {
    // Executes if condition is false
}

✅ 3. if-else if-else Statement
Used to check multiple conditions.
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
} else {
    // Code if none of the conditions are true
}

*/

#include <stdio.h>

int main() {
    int number = -10;

    if (number > 0) {
        printf("Positive number.\n");
    } else if (number < 0) {
        printf("Negative number.\n");
    } else {
        printf("Zero.\n");
    }

    return 0;
}