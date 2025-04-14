#include <limits.h>

int reverse(int x){
    long rev = 0;
    while(x != 0){
        int rem = x % 10;
        x = x / 10;
        rev = rev * 10 + rem;
        if(rev > INT_MAX || rev < INT_MIN) return 0;
    }
    return (int)rev;
}
