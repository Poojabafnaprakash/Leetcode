/*
Time complexity: O(n)
Space complexity: constant
*/

class Solution {
public:
    string reverseString(string s) {
        char temp;
        int length = s.length();
        for(int i=0;i<=(length/2);i++)
        {
        temp = s[length-i-1];
        s[length-i-1] = s[i];
        s[i] = temp;
        }
        return s;
    }
};




/*
 
 //Alternate solution
 
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

*/