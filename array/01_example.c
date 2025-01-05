#include <stdio.h>

int main(){
    int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float avg, sum;
    int length = sizeof(n) / sizeof(n[0]);

    int i;
    for (i = 0; i < length; i++) {
        sum += n[i];
    }

    printf("Sum: %.0f\n", sum);
    // avg
    avg = sum / length;
    printf("Average: %.2f\n", avg);

    return 0;
}