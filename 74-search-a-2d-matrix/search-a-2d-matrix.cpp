class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int total_elements=rows*cols;
        int e=total_elements-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            int rowcount=mid/cols;
            int colscount=mid%cols;
            if(matrix[rowcount][colscount]==target)
            {
                return true;
            }
            else if(matrix[rowcount][colscount]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
           mid=s+(e-s)/2;
        }
        return false;
        
    }
};