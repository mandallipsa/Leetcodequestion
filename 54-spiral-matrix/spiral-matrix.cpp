class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int Total_elements=m*n;
        int count=0;
        int StartingRow=0;
        int EndingCol=n-1;
        int EndingRow=m-1;
        int StartingCol=0;
        while(count<Total_elements)
        {
            //Printing first row
            for(int i=StartingCol;i<=EndingCol && count<Total_elements;i++)
            {
                ans.push_back(matrix[StartingRow][i]);
                count++;
            }
            StartingRow++;
            //Printing Ending column
            for(int i=StartingRow;i<=EndingRow && count<Total_elements;i++)
            {
                ans.push_back(matrix[i][EndingCol]);
                count++;
            }
            EndingCol--;
            //Printing Ending Row
            for(int i=EndingCol;i>=StartingCol && count<Total_elements;i--)
            {
                ans.push_back(matrix[EndingRow][i]);
                count++;
            }
            EndingRow--;
            //Printing Starting Column 
            for(int i=EndingRow;i>=StartingRow && count<Total_elements;i--)
            {
                ans.push_back(matrix[i][StartingCol]);
                count++;
            }
            StartingCol++;



        }
return ans;
        
    }
};