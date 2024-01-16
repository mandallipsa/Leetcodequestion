class Solution {
public:
    int climbStairs(int n) {
       if(n==0||n==1) 
          return 1;
       int prestep =1,currstep=1;
       for(int i =2;i<=n;i++){
           int temp=currstep;
           currstep = currstep+prestep;
           prestep=temp;
       } 
       return currstep;
    }
};