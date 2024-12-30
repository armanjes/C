/*
📚 Functions in C

✅ 1. What is a Function?
A function is a block of code that performs a specific task. It runs only when called.

Functions are important for:
- **Code Reusability:** Define once, use multiple times.  
- **Modularity:** Breaking complex problems into smaller, manageable parts.  

✅ 2. Create a Function
To create (or declare) a function:
- Specify the **return type** (e.g., `void`, `int`)  
- Write the **function name**  
- Add **parentheses ()**  
- Define the **function body** inside curly brackets `{}`  

✅ 3. Call a Function
Functions are not executed until they are **called**.  
To call a function:
- Write its **name** followed by parentheses `()`  
- End with a semicolon `;`  

✅ 4. Function Declaration vs Definition
- **Declaration:** Describes the function's return type, name, and parameters (above `main()`).  
- **Definition:** Contains the function body (below `main()`).  

It's a common practice in C to place declarations above `main()` and definitions below `main()` for better readability.
*/

#include <stdio.h>

// Function Declaration
void sum();
int multiply();

int main() {
    // Function Calls
    sum();
    sum();
    sum();
    printf("Multiply: %d\n", multiply());
    return 0;
}

// Function Definition
void sum() {
    int a = 10, b = 10;
    printf("Sum: %d\n", a + b);
}

int multiply(){
    int a = 4, b = 4;
    return a * b;
}
