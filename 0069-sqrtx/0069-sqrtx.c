int mySqrt(int x) {
    int left = 1;
    int right = x/2;
    int y;
    int mid; 
    if(x<2){
        return x;
    }
    while(left <= right){
    mid = left + (right - left)/2;
    if(mid<=x/mid){
        y = mid;
        left = mid +1;
    }else{
        right = mid - 1;
    }
    }
    return y;
}