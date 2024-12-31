// 📚 switch case

#include <stdio.h>

int main() {
    int n = 10;

    switch (n)
    {
    case 1:
        printf("One.\n");
        break;
    case 2:
        printf("Two.\n");
        break;
    default:
        printf("Inter a number between 1 to 2.\n");
        break;
    }

    return 0;
}