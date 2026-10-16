class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = 0;
        int e = 1;
        int count = 0;
        while(e < nums.size()){
        if(nums[s] == nums[e]){
           return true;
        }
         s++;
         e++;
        }
        return false;
    }
};