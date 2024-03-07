#include <stdio.h>

int main() {
    char alpha;
    printf("Enter 'c' to print 'cat': ");
    scanf(" %c", &alpha);

    if (alpha == 'c') {
        printf("cat\n");
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}
