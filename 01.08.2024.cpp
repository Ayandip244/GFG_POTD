class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        vector<int> ans;

        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        while(count < row*col){
            //pehli row left to right
            for(int i=startingCol;count < row*col && i<=endingCol;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //last col top to bottom
            for(int i=startingRow;count < row*col && i<=endingRow;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            //last row right to left
            for(int i=endingCol;count < row*col && i>=startingCol;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //pehla col bottom to up
            for(int i=endingRow;count < row*col && i>=startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
