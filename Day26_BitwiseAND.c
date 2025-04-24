#include <math.h>
int rangeBitwiseAnd(int left, int right) {
    if(right-left > pow(10,5)){
        printf("0");
    }
    int res = left;
    for(long long i = left+1; i <= right; ++i){
    res = res & i;
    }
    return res;
}