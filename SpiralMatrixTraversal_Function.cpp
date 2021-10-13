class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int left=0, top=0, right=matrix[0].size(), down=matrix.size(), track=0;
        int i=0,j=0;
        vector <int> res;
        while(left<right && top<down)
        {
            for(j=left;j<right;j++)
                res.push_back(matrix[top][j]);
            top++;
            
            for (j=top;j<down;j++)
                res.push_back(matrix[j][right-1]);
            right--;
            
            if(!(left<right && top<down))
                break;
            
            for (j=right-1;j>=left;j--)
                res.push_back(matrix[down-1][j]);
            down--;
            
            for(j=down-1;j>=top;j--)
                res.push_back(matrix[j][left]);
            left++;
        }
        return res;
    }
};
