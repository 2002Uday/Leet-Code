class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        if(length == 0) return 0;
        int validsize = 0;
        for(int i = 0; i < length ; i++){
            if(nums[i] != val){
                nums[validsize] = nums[i];
                validsize++;
            }
        }
        return validsize;
    }
};