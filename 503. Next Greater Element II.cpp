class Solution {
public:
    vector<int> res;
    vector<int> nextGreaterElements(vector<int>& nums) {
        int tmp;
        int n=nums.size();
        for (int i=0;i<n;++i){
            tmp=nums[i];
            for (int j=1;j<n;++j){
                if(tmp<nums[(i+j)%n]){
                    tmp=nums[(i+j)%n];
                    res.push_back(tmp);
                    break;
                }
            }
            if (tmp==nums[i])
                res.push_back(-1);
        }
        return res;
    }
};