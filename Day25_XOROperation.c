int xorOperation(int n, int start) {
    int arr[n];
    int i,res;
    for(i = 0; i < n; ++i){
        arr[i] = start + 2*i;
        res ^= arr[i];
    }
    return res;
    
}