#include <stdio.h>
int main() {
    char alpha;
    printf("Enter 'f' to print female: ");
    scanf(" %c", &alpha);
    
    if(alpha == 'f') {
        printf("female");
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}