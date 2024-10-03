#include <stdio.h>
#include <algorithm>  // For max function

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Read X and Y for each test case
        
        // Case 1: Solve Problem A first, then Problem B
        int score_A_first = std::max(500 - 2 * X, 0) + std::max(1000 - 4 * (X + Y), 0);
        
        // Case 2: Solve Problem B first, then Problem A
        int score_B_first = std::max(1000 - 4 * Y, 0) + std::max(500 - 2 * (X + Y), 0);
        
        // Output the maximum of the two scores
        printf("%d\n", std::max(score_A_first, score_B_first));
    }

    return 0;
}
