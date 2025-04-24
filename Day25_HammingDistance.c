int hammingDistance(int x, int y) {
    int res = x ^ y;
    int count;
     count =  res &1?1:0;
     for(int i = 1; i <= 30; ++i){
     count +=  res &(1<<i)?1:0;
     }
    
     return count; 
}