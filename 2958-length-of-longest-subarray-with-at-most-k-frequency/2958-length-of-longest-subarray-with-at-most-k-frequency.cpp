class Solution{
public:
    int maxSubarrayLength(vector<int>& nums,int k){
        unordered_map<int,int> freq;
        int n=nums.size();
        int l=0,mx=0;
        for(int r=0;r<n;r++){
            int cnt=nums[r];
            freq[cnt]++;
            while(freq[cnt]>k){
                int a=nums[l];
                freq[a]--;
                l++;}
            mx=max(mx,r-l+1);}
        return mx;}
};