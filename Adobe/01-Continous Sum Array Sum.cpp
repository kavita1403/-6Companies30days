class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v;
        vector<int>v1={-1};
       int i=0,j=0;
       long long ans=0;
       while(j<n){
          ans+=arr[j];
          if(ans<s){
              j++;
          }else if(ans==s){
              v.push_back(i+1);
              v.push_back(j+1);
             return v;
          }else if(ans>s){
              while(ans>s){
                  ans -=arr[i];
                  i++;
              }
              if(ans==s){
                  v.push_back(i+1);
                   v.push_back(j+1);
                   return v;
              }
              j++;
          }
       }
       return v1;
    }
};
