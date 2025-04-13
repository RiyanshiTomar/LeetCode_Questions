#include <limits.h>
int divide(int dividend, int divisor) {
    if (dividend == 0) {
        return 0;
    }
    if (divisor == 1) {
        return dividend;
    }
    if (divisor == -1) {
        if (dividend == INT_MIN) {
            return INT_MAX;
        }
        return -dividend;
    }

    // Determine the sign of the result
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    // Use absolute values for the division
    long long abs_dividend = labs(dividend);
    long long abs_divisor = labs(divisor);

    int result = 0;
    
    // Perform division by repeated subtraction (using bit shifts)
    while (abs_dividend >= abs_divisor) {
        long long temp = abs_divisor, multiple = 1;
        
        // Double the divisor using bit shifts to find the largest possible multiple
        while (abs_dividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        
        abs_dividend -= temp;
        result += multiple;
    }

    // Apply the sign to the result
    return sign * result;
}