class Solution {
public:
    int reverse(int x) {
    long ans = 0;
        while(x){
            int rem = x%10;
            ans = ans*10+rem;
            x=x/10;
        }   
        if(ans <INT_MIN || ans>INT_MAX){
            return 0;
        }
        else{
            return ans;
        }
    }
};