    int reverse(int x){//123,-123
        long long int bX = x;
        long long int R = 0L;
        int isNegative = (bX < 0L);//0,1
        if(bX < 0) {
            bX = -bX;
        }
        while(bX > 0L) {                  
            R = (R * 10L) + (bX % 10L);    
            bX /= 10L;                    
        }
        if(isNegative) {
            R = -R;
        }
        if(R > INT_MAX || R < INT_MIN) {
            R = 0L;
        }
        return R;
    }