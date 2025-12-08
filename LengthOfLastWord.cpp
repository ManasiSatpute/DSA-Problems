//Leetcode 58
//Length of last word
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        int i = s.length() - 1;

      
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

       
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
