class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int count = 0;

        for (int i = 1; i < n; i++) { //i=1 isliye h cus element k next element s count start kr rhe h
            if (nums[i] != nums[count]) {
                count++;
                nums[count] = nums[i];
            }
        }
        return count + 1; //count+1 isliye likhe cus 0th index s start kr rhe h toh total number of element 0 se count ho rha isliye +1 likhe
    }
};
