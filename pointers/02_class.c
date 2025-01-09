
#include<stdio.h>

int main() {

    int mynumber[4] = {25, 50, 75, 100};
    int length = sizeof(mynumber) / sizeof(mynumber[0]);
    int i = 0;
    while (i < 4)
    {
        printf("%p\n", &mynumber[i]);
        i++;
    }

    printf("%d\n", *mynumber);

    return 0;
}