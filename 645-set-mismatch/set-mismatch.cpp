class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        int dupli=-1;
        int total =accumulate(nums.begin(),nums.end(),0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                dupli=nums[i];
            ans.push_back(nums[i]);
        }
        }
        int curr= n*(n+1)/2;
        int diff= curr-(total-dupli);
        ans.push_back(diff);
        return ans;
    }
};