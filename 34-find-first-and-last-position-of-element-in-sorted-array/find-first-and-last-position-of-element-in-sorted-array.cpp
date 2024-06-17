class Solution {
public:
int leftmost(vector<int>&nums, int target){
    int start=0;int end = nums.size()-1;
    int mid = start+(end-start)/2;
    int ans1= -1;
    while(start<=end){
        if(nums[mid]==target){
            ans1 = mid;
            end = mid - 1;
        }
        else if( nums[mid]<target){
            start= mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return ans1;
}
int rightmost(vector<int>&nums, int target){
   int start=0;int end = nums.size()-1;
    int mid = start+(end-start)/2;
    int ans2= -1;
    while(start<=end){
        if(nums[mid]==target){
            ans2 = mid;
            start = mid +1;
        }
        else if( nums[mid]<target){
            start= mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return ans2;
    
}
    vector<int> searchRange(vector<int>& nums, int target) {
      int left =leftmost(nums,target);
      int right = rightmost(nums,target);
      return {left,right}; 
    }
};