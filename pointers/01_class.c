/*
📚 Pointer in C

✅ 1. What is pointer?
Pointer is also a variable that stores/ points the address of another variable.
syntax: datatype *variable;

✅ 2. Symbols
"&" -> used to get the address of a variable
"*" -> used to get the value stored in the pointer

✅ 3. Benefits
1. Efficient memory management.
2. Using too much pointers make application less understandable.

*/

#include<stdio.h>

int main() {
    int i = 10;
    int j = 11;
    
    int *p1 = &i;
    int *p2 = &j;
    int sum = *p1 + *p2;

    // Output the memory address
    printf("Memory location i: %p\n", &i);
    printf("Memory location *p1: %p\n", p1);
    // Output the value
    printf("Value of i: %d\n",i);
    printf("Value of *p1: %d\n", *p1);

    return 0;
}