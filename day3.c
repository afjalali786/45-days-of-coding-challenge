#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Calculate total working hours
        // Monday to Thursday: 4 days * X hours
        // Friday: Y hours
        int total_hours = (4 * X) + Y;
        
        // Output the result for the current test case
        printf("%d\n", total_hours);
    }
    
    return 0;
}
