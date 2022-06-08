class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        int res=0;
        roman.insert({'I',1});
        roman.insert({'V',5});
        roman.insert({'X',10});
        roman.insert({'L',50});
        roman.insert({'C',100});
        roman.insert({'D',500});
        roman.insert({'M',1000});
        bool flag = true;
        for(int i=0; i<s.size();){
            int first = roman.find(s[i])->second;
            int second;
            if(i+1 < s.size())
                second = roman.find(s[i+1])->second;
            else{
                flag = true;
                break;
            }
                
            if(first<second){
                res += second - first;
                i += 2;
                flag = false;
            }
            else{
                res += first;
                i++;
                flag = true;
            }
                
        }
        if(flag)
            res += roman.find(s[s.size()-1])->second;
        return res;
    }
};