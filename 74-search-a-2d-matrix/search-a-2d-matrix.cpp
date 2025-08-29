class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int N=matrix.size();
        int M=matrix[0].size();

        int s=0,e=N*M-1,row_index,col_index,mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;

            row_index=mid/M;
            col_index=mid%M;

            if(matrix[row_index][col_index]==target)
            {
                 return 1;
            }
           

            else if(matrix[row_index][col_index]<target)
            {
                 s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
        return 0;
        
    }
};