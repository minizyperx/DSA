class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int number = nums.size();
        for(int i=0;i<number;i++){
            int temp = nums[i]; //current element ko store krenge aur sbse compare krenge
            for(int j=i+1;j<number;j++){
                if(temp +nums[j]==target){
                    return {i,j};
                }
            }

        }
        return {};

    }
    
};