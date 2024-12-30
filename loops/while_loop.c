/*
✅ 1. while Loop
The while loop executes a block of code as long as the condition is true.
while (condition) {
    // Code to execute while condition is true
}
*/

#include <stdio.h>

int main() {
    int i = 1;
    while (i < 5)
    {
        printf("Number: %d\n", i);
        i++;
    }
    
    return 0;
}