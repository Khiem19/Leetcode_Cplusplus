class Solution {
public:
    bool isAnagram(string s, string t) {
        int lenght_s = s.size();
        int lenght_t = t.size();

        if (lenght_s != lenght_t) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // cout << s << endl;
        // cout << t;

        for(int i = 0; i < lenght_s; i++){
            if(s[i] != t[i]){
                return false;
            }
        }

        return true;
    }
};