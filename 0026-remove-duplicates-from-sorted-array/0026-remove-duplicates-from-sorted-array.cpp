class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i + 1;
        int k = 0;
        while(j < nums.size()){
            if(nums[i] != nums[j]){
                ++i;
                nums[i] = nums[j];
                j++;
                k++;
            }
            else{
                j++;
            }
        }
        return k+1;
    }
};