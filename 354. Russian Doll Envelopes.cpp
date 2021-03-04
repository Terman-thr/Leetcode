bool bigger(vector<int> a,vector<int> b){
    return (a[0]<b[0]) || (a[0]==b[0]
                           && a[1]>b[1]);
}
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),bigger);
        vector<int> nums;
        for (int i=0;i<envelopes.size();++i){
            nums.push_back(envelopes[i][1]);
        }
        int n = (int)nums.size();
        if (n == 0) {
            return 0;
        }
        vector<int> dp(n, 0);
        for (int i = 0; i < n; ++i) {
            dp[i] = 1;
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};