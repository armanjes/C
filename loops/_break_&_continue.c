/*
📚 Using break and continue

🚩 break: Exits the loop immediately.
🚩 continue: Skips the current iteration and moves to the next.
*/

#include <stdio.h>
int main() {
    for (int i = 0; i <= 10; i++) {
        if (i == 0) continue;
        if (i == 5) break;
        printf("Number: %d\n", i);
    }
        return 0;
}