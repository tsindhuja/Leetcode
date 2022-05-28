class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> letters = {{'b',0}, {'a',0}, {'l',0}, {'o',0}, {'n',0}};
        for(char x: text){
            switch(x){
            case 'b': {letters['b']+=1;
                        break;}
            case 'a': {letters['a']+=1;
                      break;}
            case 'l': {letters['l']+=1;
                      break;}
            case 'o': {letters['o']+=1;
                      break;}
            case 'n': {letters['n']+=1;
                      break;}
            default: continue;
            }
        }
        if(letters['o']>=2 && letters['l']>=2 && letters['b']>=1 && letters['a']>=1 && letters['n']>=1){
            int x= min(letters['b'], letters['a']);
            return min(min(min(min(letters['b'], letters['a']), letters['n']), letters['l']/2), letters['o']/2);
        }
        return 0;
        
    }
};