class Solution{
public:
    vector<int> findMissingElements(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<int> missingnums;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            while(nums[i]!=prev+1){
                missingnums.push_back(++prev);}
            prev=nums[i];}
        return missingnums;}
};