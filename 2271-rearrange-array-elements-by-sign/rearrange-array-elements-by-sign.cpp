class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg,pos; //pos is array with +ve nos and neg is array with -ve nos

        for(int i=0;i<nums.size();i++){ //split in two arrays
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        vector<int> result;  //final array
        for(int i = 0; i < pos.size(); i++) {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }

    return result;
    }
};