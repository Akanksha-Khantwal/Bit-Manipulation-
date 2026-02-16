class Solution {
public:
    char findTheDifference(string s, string t) {
        char x=0;
        for(char c :t)
        x=x^c;
        for(char c:s)
        x=x^c;
        return x;
        
    }
};