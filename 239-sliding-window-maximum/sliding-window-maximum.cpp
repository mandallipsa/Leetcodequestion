class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        //process first window of size =k
        for(int i=0;i<k;i++){
            //chhote elements ko remove karna hai
            while(!dq.empty()&& nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        //process remaining 
        for(int i=k;i<nums.size();i++){
            //remove out of window element
            if(!dq.empty()&& i-dq.front()>=k){
                dq.pop_front();
            }
             while(!dq.empty()&& nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
         ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};