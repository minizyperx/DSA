class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int current_element=0;
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            if(count == 0){
            current_element =nums[i];
        }
        if (nums[i]==current_element){
            count++;
        }else{
            count--;
        }
        
        }
        return current_element;
    }
};