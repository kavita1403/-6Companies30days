Q Link: https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1

class Solution
{
    
    vector<int> ans ;
    
    void  dfs(Node *root )
    {
         if(root == NULL) 
         {
             ans.push_back(-1) ;
             return ;
         }
           
         ans.push_back( root -> data ) ;
         dfs(root -> left) ;
         dfs(root -> right ) ;
         
         return ;
    }
    
    Node* dfs2(vector<int> &a  , int  &i)
    {
         if(i >=  a.size() || a[i] == -1) 
         {
              i ++ ;
              return NULL ;
         }
           
         Node *tmp = new Node( a[i ++ ]) ;
         tmp -> left = dfs2(a ,i) ;
         tmp -> right = dfs2(a ,i ) ;
         
         return tmp ;
    }
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    
    vector<int> serialize(Node *root) 
    {
        //Your code here
         dfs(root ) ;
         return ans ;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
         int i =0 ;
         return dfs2(A , i);
    }
};
