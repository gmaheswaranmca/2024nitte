bool isPalindrome(int x) {
        int bX = x;
        if(x < 0) {
            return false;
        }
        long long int R = 0L;        
        while(bX > 0L) {                  
            R = (R * 10L) + (bX % 10L);    
            bX /= 10L;                    
        }
        return (((long long int)x) == R);
}