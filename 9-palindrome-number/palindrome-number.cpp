class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int digit;
        long int rev=0;
        if(x<0)
        {
            return false;
        }
        
         while(n!=0)
            {
                digit=n%10;
                rev=(rev*10)+digit;
                n/=10;
            }
    
        if(rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};