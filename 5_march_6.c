#include <stdio.h>

int main() {
    char alpha;
    printf("Enter 'b' to print 'ball': ");
    scanf(" %c", &alpha);

    if (alpha == 'b') {
        printf("ball\n");
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}
