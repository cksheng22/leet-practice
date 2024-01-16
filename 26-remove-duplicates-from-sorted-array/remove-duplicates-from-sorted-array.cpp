class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int len = nums.size();

        if(len <= 1) return len;

        for(int i=0; i<len; i++){
            if(nums[i] != nums[index]){
                index++;
                nums[index] = nums[i];
            }
        }
        
        return index + 1;
    }
};