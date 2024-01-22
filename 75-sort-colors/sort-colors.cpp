class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(), index = 0;
        int count[3];
        memset(count, 0, sizeof(count));
        
        for(int i=0; i<n; i++) count[nums[i]]++;

        for(int i=0; i<count[0]; i++){
            nums[index] = 0;
            index++;
        }

        for(int i=0; i<count[1]; i++){
            nums[index] = 1;
            index++;
        }

        for(int i=0; i<count[2]; i++){
            nums[index] = 2;
            index++;
        }
    }
};