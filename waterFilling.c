#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int B1, B2, B3;
        // Read the status of the three bottles
        scanf("%d %d %d", &B1, &B2, &B3);

        // Count the number of empty bottles
        int emptyCount = (B1 == 0) + (B2 == 0) + (B3 == 0);

        // Determine if Chef needs to fill the bottles
        if (emptyCount >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}
