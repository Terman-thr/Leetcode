class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int trend=0;
        for (auto i=A.begin();i<A.end()-2;++i){
            if(*i-*(i+1)!=0) {
                trend = *i-*(i+1);
                break;
            }
        }
        if (trend==0) return true;
        for (auto i=A.begin();i<A.end()-2;++i){
            if ((*(i+1)-*(i+2))*trend <0) return false;
        }
        return true;
    }
};