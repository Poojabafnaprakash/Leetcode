class Solution {
public:
    string reverseString(string s) {
        char temp;
        int length = s.length();
        int last = length;
        int first = 0;
        for(int i=(length-1);i>=length/2;i--)
        {
            temp = s[i];
            s[i] = s[first];
            s[first] = temp;
            first++;
        }
        
        return s;
    }
};