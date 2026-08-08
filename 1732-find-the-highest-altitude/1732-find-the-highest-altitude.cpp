class Solution{
public:
    int largestAltitude(vector<int>& gain){
        int n=gain.size();
        int mx=0;
        for(int i=0;i<=n;i++){
            int a=0;
            for(int j=0;j<i;j++){
                a+=gain[j];}
            mx=max(a,mx);}
        return mx;}
};