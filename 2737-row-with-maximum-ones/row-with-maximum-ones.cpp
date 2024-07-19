class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        //oneCount will store max number of 1's in a row
        int oneCount = INT_MIN; 
        //rowNo will store index of max no. of 1's wali row
        int rowNo = -1;

        for(int i=0; i<n; i++){
            //row start hone se phle initialise count with 0
            int count = 0;
            for(int j=0; j<mat[i].size(); j++){
                //if 1 found, then increment count
                if(mat[i][j] == 1){
                    count++;
                }
            }
            //after row completion, compare count with oneCount
            if(count > oneCount){
                oneCount = count;
                rowNo = i;
            }
        }

        ans.push_back(rowNo);
        ans.push_back(oneCount);
        return ans;

    }
};