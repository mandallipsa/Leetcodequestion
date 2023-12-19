class Solution {
public:
    int mySqrt(int x) {
        int s=0;int e=x;
        long mid=s+(e-s)/2;
        long target=x;
        int ans;
        while(s<=e)
        {
            
            if(mid*mid==target)
            {
                return mid;
            }
            else if(mid*mid<target)
            {
             ans=mid;
             s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};