
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }
    int s=0;int e=abs(dividend);
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e)
    {   
        //perfect solution
        if(abs((long long)mid*divisor)==abs((long long)dividend))
        {
            ans=mid;
            break;
        }
        //not perfect solution
        if(abs((long long)mid*divisor)>abs((long long)dividend))
        {
            e=mid-1;
        }
        else{
            //ans store
            ans=mid;
            //right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if((divisor>0 && dividend>0)||(divisor<0 && dividend<0))
    {
        return ans;
    }
    else{
       return -ans;
    }

    }
};