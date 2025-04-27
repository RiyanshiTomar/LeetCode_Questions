int hammingWeight(int n) {
    int count = 0;
  while (n != 0) {
      if (n & 1) { // check if the last bit is 1
          count++;
      }
      n = n >> 1; // shift n right by 1
  }
  return count;
  
}