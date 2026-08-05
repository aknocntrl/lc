class Solution{
public:
    bool uniqueOccurrences(vector<int>& arr){
        unordered_map<int,int> freq;
        for(auto i:arr){
            freq[i]++;}
        unordered_set<int> s;
        for(auto i:freq){
            s.insert(i.second);}
        return freq.size()==s.size();}
};