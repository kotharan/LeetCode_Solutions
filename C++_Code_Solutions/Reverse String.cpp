//Done by >> Anand Kothari
class Solution {
public:
    string reverseString(string s) {

        int len = s.size();
        char temp;

        for(int i=0 ; i<len/2; i++)
        {
           temp = s[len-i-1];   // suppose the string is 'hello' this will store 'o'
            s[len-1-i] = s[i];  // Then this will store the first value of string to the last index 'hellh' in the first loop
            s[i] = temp;        // This will store the temp value in first index 'oellh' for the first loop

        }
        return s;

    }
};




