/*
📚 Variables in C

✅ 1. What are Variables?
Variable is a name given to a memory location used to store data.

✅ 2. Declaring Variables
data_type variable_name;
int age;
float salary;

✅ 3. Variable Initialization
We can assign a value when declaring a variable
int age = 20;
float pi = 3.1416;

✅ 4. Rules for Naming Variables:
    🚩. Must start with a letter (a-z, A-Z) or an underscore (_).
    🚩. Cannot start with a digit (0-9).
    🚩. No spaces or special characters (e.g., @, #, $).
    🚩. Case-sensitive (Age and age are different).
    🚩. Avoid using C reserved keywords (e.g., int, float).

✅ 5. Constants in C
Constants are fixed values that cannot be changed during the program execution.
Declared using:
    🚩. #define (Preprocessor Directive)
    🚩. const keyword
*/

#include <stdio.h>
#define pi 3.1416

int main() {
    int age = 20;
    float dollar = 10.1416;
    const float g = 9.83257874;

    printf("Age: %d\n", age);
    printf("Dollar: %.3f\n", dollar);
    printf("Gravity: %.1f\n", g);
    printf("PI: %.2f\n", pi);
    return 0;
}