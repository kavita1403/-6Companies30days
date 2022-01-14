Q Link: https://practice.geeksforgeeks.org/problems/count-number-of-subtrees-having-given-sum/1/#
Solution- 
  
  int Sum(Node* root, int X, int &val){
    if(!root)return 0;
    int s=Sum(root->left,X,val)+Sum(root->right,X,val)+root->data;
    if(s==X)val++;
    return s;
}
int countSubtreesWithSumX(Node* root, int X)
{
  	int val=0;
  	Sum(root,X,val);
  	return val;
}
