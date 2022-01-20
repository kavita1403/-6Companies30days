class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
     vector<int>v;
     for(int i=n-1; i>=0;i--)
     {
         if(v.size()==0)
         {
             v.push_back(a[n-1]);
         }
         else if(a[i]>=v.back())
         {
             v.push_back(a[i]);
         }
        //  else
        //  {
        //      continue;
        //  }
     }
     reverse(v.begin(),v.end());
     return v;
     
     
    }
};
