class Solution {
public:
    void reverseString(vector<char>& s) {
        
        auto first = s.begin();
        auto second = s.end()-1;
       
        while(first < second){
            auto temp = *first;
            *first = *second;
            *second = temp;
            first++;
            second--;
            
        }
       
    }
};