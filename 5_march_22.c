#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number between 45 to 89: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 20) {
        printf("This number is between 10 to 20\n");
    } else {
        printf("Input mismatch\n");
    }

    return 0;
}
