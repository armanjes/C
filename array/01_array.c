/*
📚 Arrays in C

✅ What is array?
Array is a way to store multiple values in a single variable.
To create an array, define its data type and specify its name followed by square brackets. To store values use a comma-separated list inside curly braces, and make sure all values are of the same data type.

** int myNumbers[] = {25, 50, 75, 100}; **

We can fix the size of an array while defining.Using this method, you should know the number of array elements in advance, in order for the program to store enough memory.You are not able to change the size of the array after creation.

Array index starts with "0". We can access any value of an array through index numbers. We can also loop through an array.

*/

#include <stdio.h>

int main() {
    int myNumber[] = {10, 2, 3, 4, 5, 6, 100};
    // printf("%d", myNumber[0]);
    char symbols[3] = {'+', '-', '*'};
    // printf("%c", symbols[1]);

    int i;
    int length = sizeof(myNumber) / sizeof(myNumber[0]); // calculating array length
    for (i = 0; i < length; i++) {
        printf("%d\n", myNumber[i]);
    }
        return 0;
}