class Solution{
public:
    int pivotIndex(vector<int>& nums){
        int s=0;
        vector<int> sumLeft;
        vector<int> sumRight;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];}
        int left=0;
        for(int i=0;i<nums.size();i++){
            sumLeft.push_back(left);
            int right=s-left-nums[i];
            sumRight.push_back(right);
            left+=nums[i];}
        for(int i=0;i<nums.size();i++){
            if(sumLeft[i]==sumRight[i]){
                return i;}}
        return -1;}
};