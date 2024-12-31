/*
📚 Recursion in C

✅ 1. What is recursion?
Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
*/

#include <stdio.h>

int sum(int k);

int main(){
    printf("%d\n", sum(10));
    printf("%d\n", sum(0));
    return 0;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else{
        return 0;
    }
}