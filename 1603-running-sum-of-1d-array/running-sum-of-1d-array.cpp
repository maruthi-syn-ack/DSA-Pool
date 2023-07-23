class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector <int> sum ;
        int summer=0;
        for (auto i: nums)
        {
            summer = summer + i;
            sum.push_back(summer);
        } 
        return sum;
    }
};