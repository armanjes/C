/*
📚 Parameters & arguments in C

✅ 1. What is parameter?
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma.

syntax:
returnType functionName(datatype parameter1, datatype parameter2, datatype parameter3) {
  // code to be executed
}
*/

#include <stdio.h>

int sum(int a, int b);

int main() {
    printf("Sum: %d\n", sum(10, 4));
    // Values of parameters are called arguments. Here 10 and 4 are arguments.
    return 0;
}

int sum(int a, int b) {
    return a + b;
}