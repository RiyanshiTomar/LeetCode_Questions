int getNext (int n) {
    int sum = 0;
    while(n > 0){
       int rem = n % 10;
       int square = rem*rem;
       sum = sum + square; 
       n /= 10;
    }
    return sum;
}
int isHappy(int n){
    int slow = n;
    int fast = getNext(n);

    while(fast != 1 && slow != fast){
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    return fast == 1;
}