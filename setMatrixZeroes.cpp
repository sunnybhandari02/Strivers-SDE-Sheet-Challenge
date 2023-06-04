class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int,int>>index;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    index.push_back({i,j});
                }
            }
        }

        for(auto it: index)
        {
            int p = it.first;
            int q = it.second;

            for(int col = 0; col < n; col++)
            {
                matrix[p][col] = 0;
            }

            for(int row = 0; row < m; row++)
            {
                matrix[row][q] = 0;
            }
        }
        
    }
};
