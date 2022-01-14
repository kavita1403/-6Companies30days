Q Link: https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/


Solution- 
  class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
      vector<int>ans;
      int row_start=0, row_end=r-1, col_start=0, col_end=c-1;
      int flag=0;
      while(row_start<=row_end && col_start<=col_end){
          if(flag==0){
              for(int i=col_start;i<=col_end;i++){
                  ans.push_back(matrix[row_start][i]);
              }
              row_start++;
          }else if(flag==1){
               for(int i=row_start;i<=row_end;i++){
                  ans.push_back(matrix[i][col_end]);
              }
              col_end--;
              
          }else if(flag==2){
              
              for(int i=col_end;i>=col_start;i--){
                  ans.push_back(matrix[row_end][i]);
              }
              row_end--;  
              
          }else if(flag==3){
              
             for(int i=row_end;i>=row_start;i--){
                  ans.push_back(matrix[i][col_start]);
              }
              col_start++;  }  
      flag++;
      flag %=4;
      }
    
      return ans;
    }
};
