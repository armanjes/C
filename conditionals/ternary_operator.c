/*
📚 Ternary operator

syntax: 
condition ? expression_if_true : expression_if_false

*/

#include <stdio.h>

int main(){
    int age = 17;
    age >= 18 ? printf("Voter\n") : printf("Not a voter.\n");
    return 0;
}