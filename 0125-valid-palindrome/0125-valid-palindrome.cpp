class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.capacity(); i++) {
            s[i] = tolower(s[i]);
            if(!(s[i] >= 'a' && s[i] <= 'z' || isdigit(s[i]))){
                s[i] = ' ';
            }
        }

        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());

        string s2 = s;
        reverse(begin(s2),end(s2));

        cout << s << endl;
        cout << s2;

        if (s != s2) {
            return false;
        }
        
        return true;
    }
};