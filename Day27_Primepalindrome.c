#include <stdbool.h>
#include <math.h>

// Prime checker
bool isPrime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    int sq = (int)sqrt(x);
    for (int i = 3; i <= sq; i += 2)
        if (x % i == 0) return false;
    return true;
}

// Build an odd-length palindrome from a number
int buildPalindrome(int x) {
    int result = x;
    x /= 10;  // Remove the middle digit to avoid duplication
    while (x > 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int primePalindrome(int n) {
    if (n <= 2) return 2;
    if (n <= 3) return 3;
    if (n <= 5) return 5;
    if (n <= 7) return 7;
    if (n <= 11) return 11;

    for (int i = 1; i < 100000; i++) {
        int pal = buildPalindrome(i);
        if (pal >= n && isPrime(pal))
            return pal;
    }
    return -1; // Should never reach here
}