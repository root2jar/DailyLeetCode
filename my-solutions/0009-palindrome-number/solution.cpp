class Solution {
public:
    bool isPalindrome(int x) {
        int og=x;
        if(x<0){
            return false;
        }
        if(x%10==0 && x!=0 ){
            return false;
        }
        long long rev=0;
        while(x!=0){
            int digit=x%10;
            rev=rev*10+digit;
            x=x/10;
        }
        if(rev==og){
            return true;
        }
        return false;
        
    }
};
