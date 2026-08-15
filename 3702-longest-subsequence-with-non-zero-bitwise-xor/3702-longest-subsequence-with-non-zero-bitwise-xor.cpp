class Solution{
public:
    int longestSubsequence(vector<int>& nums){
        int total=0,len=nums.size();
        bool ok=false;
        for(int n:nums){
            ok|=n>0;
            total^=n;}
        if(total!=0){
            return len;}
        if(ok){
            return len-1;}
        return 0;}
};