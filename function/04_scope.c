/*
📚 Scope in C

✅ 1. What is scope?
Scope defines the accessibility of a variable.
There are two scopes -> 
1. Global Scope -> A variable defined outside of a function called global scoped variable. We can access it from anywhere from our program.

2. Local Scope -> A variable defined inside a function called local scoped variable. We can access it only inside the function.

✅ 2. Naming variables
If you operate with the same variable name inside and outside of a function, C will treat them as two separate variables; One available in the global scope and one available in the local scope.
*/

#include <stdio.h>

//👉 Global scope variable
int age = 20;

void sum();

int main(){
    sum();
    printf("👉 Global scope: %d\n", age);
    return 0;
}

void sum() {
    //👉 Local scope variable
    float cgpa = 3.82;
    printf("👉 Local scope: %.2f\n", cgpa);
}