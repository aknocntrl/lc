class Solution{
public:
    string reverseVowels(string s){
        string a=s;
        int start=0;
        int end=s.size()-1;
        string vowels="aeiouAEIOU";
        while(start<end){
            while(start<end && vowels.find(a[start])==string::npos){
                start++;}
            while(start<end && vowels.find(a[end])==string::npos){
                end--;}
            swap(a[start],a[end]);
            start++;
            end--;}
        return a;}
};