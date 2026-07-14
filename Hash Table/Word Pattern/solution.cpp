class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char , string>mp;
        unordered_map<string  , char>wordTochar;
        string temp ="";
        
        vector<string>words;
        for(int i = 0 ;i<s.length() ;i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }
        }
        words.push_back(temp);

        if(pattern.size() != words.size()){
            return false;
        }
        for(int i = 0;i<words.size() ;i++){
            char key = pattern[i];
            string val = words[i];
            if(mp.find(key) != mp.end()){
                if(mp[key] != val){
                        return false;
                }
            }else{
                if(wordTochar.find(val) != wordTochar.end()){
                    return false;
                }
                wordTochar[val] = key;
                mp[key] = val;
            }
        }
        return true;
        
    }
};
