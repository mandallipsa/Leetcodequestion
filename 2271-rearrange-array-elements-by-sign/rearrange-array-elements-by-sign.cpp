class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n);
        int positiveIndex=0;
        int negativeIndex =1;
        for(auto& num:nums){
            if(num < 0){
                result[negativeIndex] = num;
                negativeIndex+=2;
                }
                else{
                result[positiveIndex] = num;
                positiveIndex+=2;  
                }
        }
        return result;
    }
};