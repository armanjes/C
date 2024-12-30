/*
📚 Data Types in C

✅ 1. What are Data Types?
Data types specifies the type of data stored in a variable. Each data type requires different amounts of memory to store data.

✅ 2. Types of Data Types in C

1️⃣ Primary Data Types: Also known as built-in datatypes are the most basic data types that are used for representing simple values such as integers, float, characters, double, void.

2️⃣ Derived Data Types: The data types that are derived from the primitive datatypes are referred to as Derived Data Types such as array, pointer, function.

3️⃣ User Defined Data Types: User defines these data types by himself such as structure, union, enum.

✅ 3. Format Specifiers
Used in `printf` and `scanf` to specify data type while printing or taking input.  

| Data Type | Format Specifier | Example |
|-----------|------------------|---------|
| `int`     | `%d` or `%i`     | `printf("%d", num);` |
| `float`   | `%f`            | `printf("%f", num);` |
| `double`  | `%lf`           | `printf("%lf", num);` |
| `char`    | `%c`            | `printf("%c", letter);` |
| `string`  | `%s`            | `printf("%s", str);` |

*/

#include <stdio.h>

int main() {
    int age = 21;         // Integer
    float height = 5.9;   // Float
    char grade = 'A';     // Character
    double distance = 12345.6789; // Double

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("Distance: %.4lf\n", distance);

    return 0;
}