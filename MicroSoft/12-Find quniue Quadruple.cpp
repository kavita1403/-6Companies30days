Q Link: https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1#
Solution- 
  
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
