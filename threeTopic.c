#include <stdio.h>

int main() {
    // Declare variables for the topics
    int A, B, C, X;

    // Read the input values
    scanf("%d %d %d %d", &A, &B, &C, &X);

    // Check if the topic X is one of the prepared topics A, B, or C
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
