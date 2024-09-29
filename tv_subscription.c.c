#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of friends
        int X; // Cost of one subscription
        
        scanf("%d %d", &N, &X);
        
        // Calculate the number of subscriptions needed
        int subscriptions_needed = (N + 5) / 6; // This is equivalent to ceil(N / 6)
        
        // Calculate the total cost
        int total_cost = subscriptions_needed * X;
        
        // Output the total cost
        printf("%d\n", total_cost);
    }
    
    return 0;
}
