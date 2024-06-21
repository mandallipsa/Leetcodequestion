class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int start = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int total_elements = rows*cols ;
    int end = total_elements -1;
    int mid = start +(end - start )/2;
    while(start<=end){
        int rowsCount = mid /cols;
        int colsCount = mid % cols;
        if(matrix[rowsCount][colsCount]== target){
            return true;
        }
        else if(matrix[rowsCount][colsCount]>target){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
        mid = start+(end -start)/2;
    }
    return false;
        
    }
};