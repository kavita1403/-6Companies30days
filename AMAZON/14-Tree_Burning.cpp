
Q Link: https://practice.geeksforgeeks.org/problems/burning-tree/1/#

class Solution {
  public:
// burning tree with water 
  void BurningTreeNode(Node*root, int t ,Node *block, vector<vector<int>> &ans){
      if(root == nullptr || block == root) return ;
      if(t == ans.size()) ans.push_back({}) ;
      ans[t].push_back(root->data); 
      BurningTreeNode(root->left,t+1,block,ans);
      BurningTreeNode(root->right,t+1,block,ans);
  }
  int BurningTree(Node*root,int target,vector<vector<int>> &ans){
      if(root == nullptr) return -1 ;
      if(root->data == target) {
           BurningTreeNode(root,0,nullptr,ans);
          return 1 ;
      }
      int ld = BurningTree(root->left,target,ans);
      int rd = BurningTree(root->right,target,ans);
      if(ld!=-1){
          BurningTreeNode(root,ld,root->left,ans);
          return ld + 1 ;
          
      }
      if(rd!=-1){
          BurningTreeNode(root,rd,root->right,ans);
          return rd + 1 ;
          
      }
      return -1 ;
   }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        vector<vector<int>> ans ;
        BurningTree(root,target,ans);
       
        return ans.size() - 1 ; 
    }
};
