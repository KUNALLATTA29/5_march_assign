#include <stdio.h>
int main() {
    char alpha;
    printf("Enter 'm' to print male: ");
    scanf(" %c", &alpha);
    
    if(alpha == 'm') {
        printf("male");
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}