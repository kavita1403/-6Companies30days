Q Link: https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1#
Solution- 
  #Method-1:
   
  class Solution{
    public:
   // 4 3 3 4 4 2 1 2 1 1=> 1 1 3 4 | 1 2 2 4| 1 2 3 3 
   // 1 1 3 4 5 6  7 (k=12)
    vector<vector<int> > fourSum(vector<int> &a, int rsum) {
          sort(a.begin(),a.end());
        int n=a.size();
        set<vector<int>> st;
        vector<vector<int>> vt;
        for(int i=0;i<n-3;i++)
        {
        for(int j=i+1;j<n-2;j++)
        {
        int k=j+1;
        int l=n-1;
        while(k<l)
        {
            int sum=a[i]+a[j]+a[k]+a[l];
            if(sum==rsum)
            {
                vector<int> vs{a[i],a[j],a[k],a[l]};
                st.insert(vs);
                l--;
            }
            else if(sum<rsum)
            {
                k++;
            }
            else l--;
        }
        }
        }
        for(auto x:st)
        vt.push_back(x);
        return vt;
    }
};




#Method-2
  
  class Solution{
    public:
   // 4 3 3 4 4 2 1 2 1 1=> 1 1 3 4 | 1 2 2 4| 1 2 3 3 
   // 1 1 3 4 5 6  7 (k=12)
    vector<vector<int> > fourSum(vector<int> &a, int k) {
       if (a.size() < 4) return {};
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 3; ++i) {

        if (a[i] > 0 && a[i] > k) break;
      
        if (i > 0 && a[i] == a[i - 1]) continue;
        for (int j = i + 1; j < a.size() - 2; ++j) {

            if (j > i + 1 && a[j] == a[j - 1]) continue;

            int left = j + 1;
            int right = a.size() - 1;
            while (left < right) {
                int old_l = left;
                int old_r = right;

                int sum = a[i] + a[j] + a[left] + a[right];
                if (sum == k) {

                    ans.push_back({a[i], a[j], a[left], a[right]});

                
                    while (left < right && a[left] == a[old_l]) left++;
                    while (left < right && a[right] == a[old_r]) right--;
                    // left++;
                    // right--;
                } else if (sum > k) {
                    right--;
                } else {
                    left++;
                }
            }
        }
    }
    return ans;
    }
};
