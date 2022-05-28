class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string a1= "qwertyuiopQWERTYUIOP";
        string a2 = "asdfghjklASDFGHJKL";
        string a3 = "zxcvbnmZXCVBNM";

        set<char> row1(begin(a1), end(a1));
        set<char> row2(begin(a2), end(a2));

        set<char> row3(begin(a3), end(a3));

        vector<string> results;
        for(auto x: words){
            cout<<x<<endl;
            string val = x;
            
            set<char> temp(begin(val), end(val));
            
            if(includes(row1.begin(), row1.end(), temp.begin(), temp.end()))
                results.push_back(x);
            else if(includes(row2.begin(), row2.end(), temp.begin(), temp.end()))
                results.push_back(x);
            else if(includes(row3.begin(), row3.end(), temp.begin(), temp.end()))
                results.push_back(x);

        }
        return results;
    }
};