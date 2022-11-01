class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , j = i + 1, swap = 0;
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                nums[j] = 0;
                j++;
            }else{
                ++i;
                nums[i] = nums[j];
                swap++;
                j++;
            }
        }
        return swap+1;
    }
};