class Solution {
public:
    //Time Complexity: O(No. of white spaces)
    //Space Complexity: O(Length of s)
    string reverseWords(string s) {
        vector<string> split_words;
        stringstream str(s);
        string final_string;
        while(str.good())
        {
            string substr;
            getline(str, substr,' ');
            reverse(substr.begin(), substr.end());
            final_string.append(substr);
            final_string.append(" ");
            
        }
        size_t end= final_string.find_last_not_of(" ");
        return (end == std::string::npos) ? "" : final_string.substr(0, end+1);;
    }
};