#include <vector>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        int start = findIndex(nums, target, true);
        int end = findIndex(nums, target, false);

        if (start <= end) {
            result[0] = start;
            result[1] = end;
        }

        return result;
    }

private:
    int findIndex(vector<int>& nums, int target, bool isFirst) {
        int index = -1;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                index = mid;

                if (isFirst) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return index;
    }
};
