class Solution {
public:
    bool isPalindrome(string s){
        char first = 0, last = s.size()-1;
        for(int i=0; i<s.size()-1; i++){
            if(s[first] != s[last]) return false;
            first++;
            last--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string x: words){
            if(isPalindrome(x)) return x;
            isPalindrome(x);
        }
        return "";
    }
};