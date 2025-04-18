int countDigitOne(int n) {
    int count = 0;
    for (long long factor = 1; factor <= n; factor *= 10) {
        long long lower = n % factor;
        long long current = (n / factor) % 10;
        long long higher = n / (factor * 10);

        if (current == 0)
            count += higher * factor;
        else if (current == 1)
            count += higher * factor + lower + 1;
        else
            count += (higher + 1) * factor;
    }
    return count;
}