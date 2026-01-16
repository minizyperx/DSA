class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        ans= n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++){
          sum += nums[i];  //nums(i) me jo v hoga woh sum m add ho jaega
        }
       
        return(ans-sum);
    
    }
};