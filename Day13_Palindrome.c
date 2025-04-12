#include <stdbool.h>
bool isPalindrome(int x) {
    if(x < 0) return false;
    int a = x;
    long long reverse = 0;
    while(x > 0){
        int rem = x % 10;
        reverse = (reverse * 10) + rem;
        x = x /10;
    }
    return a == reverse;
}