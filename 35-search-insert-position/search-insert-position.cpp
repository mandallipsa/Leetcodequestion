class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int s=0;int e=nums.size()-1;
       
        
        // if(target > nums[e]){
        //     return e + 1;
        // }
        // while(s <= e ){
        //    int mid = s+(e-s)/2;
        //     if(nums[mid]== target){
        //         return mid;
        //     }
        //     else if(nums[mid] > target){
        //         e = mid-1;
        //     }
        //     else{
        //         s = mid + 1;
        //     }
       

        // }
        // return s;
       //my solution
        int start = 0 ;int  end = nums.size()-1;
      int mid = start + (end - start)/2;
      while(start<=end){
        if(nums[mid]==target){
            return mid;
        }
       if(nums[mid]<target && mid+1<=nums.size()){
            start = mid +1;
        }
        if(nums[mid]>target && mid -1 >= -1){
            end = mid -1;
        }
        mid = start + (end - start)/2;

      }
      return start;
 

        
    }
};