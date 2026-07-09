class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro=1;
        for(auto it:nums){
            if(it<0)
                pro=pro* -1;
            else if(it==0)
                return 0;
            else
                pro=pro*1;
        }
        return pro;
    }
};