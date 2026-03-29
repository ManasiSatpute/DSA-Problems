// Leetcode 744
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int i =0;
       while(i < letters.size()){
        if(letters[i] > target){
            return letters[i];
           
        }
        i++;
       }
       return letters[0];
    }
};
