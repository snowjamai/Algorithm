using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        vector<int> res;
        for(i = 0; i < nums.size() - 1; ++i)
            for(j = i + 1;j < nums.size(); ++j)
                if(nums[i] + nums[j] == target){
                    // cout << "[" << i << "," <<j<< "]" << endl;
                    res.push_back(i);
                    res.push_back(j);
                }
        
        return res;
    }
    
    
    
};