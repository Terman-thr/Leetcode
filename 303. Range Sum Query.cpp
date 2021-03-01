#include <vector>

class NumArray {
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        numArr.resize(n+1,0);
        for (int i=1;i<n+1;++i){
            numArr[i]=numArr[i-1]+nums[i-1];
        }
    }

    int sumRange(int i, int j) {
        return numArr[j+1]-numArr[i];
    }

    vector<int> numArr;
};